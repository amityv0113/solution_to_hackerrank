#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long >v;
    long long f1=0;
    long long f2=1;
    while(f2<=10000000000)
    {
        v.push_back(f2);
        long long int a=f2;
        f2=f1+f2;
        f1=a;
    }
    
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int count=0;
        for (long int i=0 ;i<v.size() ;i++)
        {
            if (n==v[i])
            {
                cout<<"IsFibo"<<endl;
                count++;
                break;
            }
        }
        if (count==0)
        {
            cout<<"IsNotFibo"<<endl;
        }
    }

    return 0;
}