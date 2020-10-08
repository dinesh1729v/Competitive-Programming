#include<bits/stdc++.h>
using namespace std;

int modularExpo(long long int a, long long int b, int m)
{
    long long int ans=1;
    a = a%m;
    if(a==0)
        return 0;
    while(b>0)
    {
        if(b&1)
        {
            ans = (ans*a)%m;
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    int a;
    long long int b;
    while(t--)
    {
        cin>>a>>b;
        cout<<modularExpo(a,b,10)<<endl;
    }
    return 0;
}