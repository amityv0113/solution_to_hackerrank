#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double l,s1,s2;
    cin>>l>>s1>>s2;
    long double q;
    cin>>q;
    while(q--)
    {
        long double a;
        cin>>a;
        cout<<fixed<<setprecision(20)<<(sqrt(2)*(l-sqrt(a)))/abs(s2-s1)<<endl;
    }
}