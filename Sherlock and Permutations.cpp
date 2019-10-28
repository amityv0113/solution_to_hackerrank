#include<bits/stdc++.h>
using namespace std;

long long int  power1(long long int x,long long int y)
{
    long long int mod1=1000000000+7;
    long long int res=1;
    x=(x)%mod1;

    while(y>0)
    {
        if (y & 1)
        {
            res = (res*x)%mod1;
        }
        y=y/2;
        x=(x*x)%mod1;
    }
    return res;
    
}
int main()
{
    long long mod=1000000000+7;
    __uint64_t arr[2000+1];
    arr[0]=1;
    for (long long int i=1 ;i<2000+1 ;i++)
    {
        arr[i]=(arr[i-1]*i)%mod;
    }
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        cout<<(arr[n+m-1]*(power1((arr[m-1]*arr[n])%mod,mod-2)))%mod<<endl;
    }
    return 0;
}
