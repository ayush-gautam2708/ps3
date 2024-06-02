#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> pre(n+1);
        pre[0]=0;
        for(int i=1;i<=n;i++)
        {
            char ch;
            cin>>ch;
            pre[i]=(ch-'0')+ pre[i-1];
        }
        map<int,long long> sub;
        for(int i=0;i<=n;i++)
        {
            sub[pre[i]-i]++;
        }
        long long good=0;
        tr(sub,it)
        {
            long long f=it->second;
            good+=f*(f-1)/2;
            //cout<<"*"<<it->first<<" "<<f<<"  "<<good<<endl;
        }
        cout<<good<<"\n";
        }
}