#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    vector<long long int >v;
    for (long int i=1 ;i<=1000 ;i++)
    {
        long long int sum=0;
        long long int count=0;
        long long int a=i;
        while(a>0)
        {
            if (a%2!=0)
            {
                sum=sum+9*pow(10,count);
                count++;
                a=a/2;
            }
            else
            {
                count++;
                a=a/2;
            }
            
        }
        v.push_back(sum);

    }
    sort(v.begin(),v.end());
    while(t--)
    {
        long long int n;
        cin>>n;
        for (long int i=0 ;i<v.size() ;i++)
        {
            if (v[i]%n==0)
            {
                cout<<v[i]<<endl;
                break;
            }
        }
    }
    return 0;
}