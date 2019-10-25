#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int y ,long long int p)
{
    long long int res =1;
    while(y>0)
    {
        if (y & 1)
        {
            res =(res*x)%p;
        }
        y=y/2;
        x=(x*x)%p;
    }
    return res;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int z=(power(2,n,100000)-1)%100000;
        cout<<z<<endl;
    }


    return 0;
}