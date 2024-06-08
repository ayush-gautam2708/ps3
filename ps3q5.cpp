#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(abs(s[i+1]-s[i])<=m)
        {
            continue;
        }
        else
        {
            if(s[i]<s[i+1])
            {
                s[i]=s[i+1]-m;
            }
            else{
                s[i+1]=s[i]-m;
            }
        }
    }
}