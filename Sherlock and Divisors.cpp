#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int count=0;
        for (long long int i=1 ;i<=sqrt(n) ; i++)
        {
            if (n%i==0)
            {
                if (n/i==i)
                {
                    if (i%2==0)
                    {
                        count++;
                    }
                }
                else
                {
                    if (i%2==0)
                    {
                        count++;
                    }
                    if ((n/i)%2==0)
                    {
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}