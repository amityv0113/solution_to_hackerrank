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
        long long int arr[n];
        long long int arr1[n];
        for (long int i=0 ;i<n ;i++)
        {
            cin>>arr[i];
        }
        arr1[0]=arr[0];
        for (long int i=1 ;i<n ;i++)
        {
            arr1[i]=arr1[i-1]+arr[i];
        }
        if (n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            long int count=0;
            int sum=0;
            for (long int i=0 ;i<n ; i++)
            {
                if (i==0)
                {
                    if(sum==arr1[n-1]-arr1[i])
                    {
                        count++;
                        break;
                    } 
                }
                else
                {
                    if (arr1[i-1]==(arr1[n-1]-arr1[i]))
                    {
                        count++;
                        break;
                    }
                }
            }
            if (count==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
