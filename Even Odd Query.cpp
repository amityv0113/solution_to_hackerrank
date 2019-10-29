#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long int arr[n];
    for (int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    long long int q;
    cin>>q;
    while(q--)
    {
        long long int x,y;
        cin>>x>>y;
        if (arr[x-1]%2==0)
        {
            if (arr[x]==0 && x<=y-1)
            {
                cout<<"Odd"<<endl;
            }
            else
            {
                cout<<"Even"<<endl;   
            }
        }
        else
        {
            cout<<"Odd"<<endl;
        }
        
    }
    return 0;
}