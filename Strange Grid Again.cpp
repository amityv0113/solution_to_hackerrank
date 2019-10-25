#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int count=0;
        long int i=0;
        long int j=n-1;
        while(j>=i)
        {
            if (j==k)
            {
                cout<<count<<endl;
                break;
            }
            count++;
            j--;
            
            if (i==k)
            {
                cout<<count<<endl;
                break;
            }
            count++;
            i++;
        }
    }
    return 0;
}
