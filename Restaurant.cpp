#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int l,b;
        cin>>l>>b;
        long long int a=__gcd(l,b);
        long long int z=(l/a)*(b/a);
        cout<<z<<endl;
    }
}