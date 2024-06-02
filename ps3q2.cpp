#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
long long solve(int ind,int cnt,vector<vector<int> > &dp,vector<int> &b,int n)
{
    if(cnt==3)
    {
        return 0;
    }
    if(ind==n)
    {
        return INT_MIN;
    }
    if(dp[ind][cnt]!=-1)
    {
        return dp[ind][cnt];
    }
    long long pick=(cnt==0?ind:0)-(cnt==2?ind:0)+b[ind]+solve(ind+1,cnt+1,dp,b,n);
    long long notpick=solve(ind+1,cnt,dp,b,n);
    return (dp[ind][cnt]=max(pick,notpick));
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> b(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<vector<int> > dp(n,vector<int>(3,-1));
        int sum=solve(0,0,dp,b,n);
        cout<<sum<<endl;;
    }
}