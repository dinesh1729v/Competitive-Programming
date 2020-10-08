#include<bits/stdc++.h>
using namespace std;
long long int dp[100000]={0};
long long int convert(long long int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n<100000)
    {
        if(dp[n]==0)
        {
            long long int ans = max(n, convert(n/2)+convert(n/3)+ convert(n/4));
            dp[n]=ans;
        }
        return dp[n];
    }
    else{
        return max(n,convert(n/2)+convert(n/3)+ convert(n/4));
    }
}

int main()
{
    int t;
    long long int n;
    while(cin>>n)
    {
        cout<<convert(n)<<endl;
    }
    return 0;
}