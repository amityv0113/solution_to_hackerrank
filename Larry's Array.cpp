#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for (int t=0 ;t<T; t++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0 ;i<n ;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for (int i=0 ;i<n ;i++)
        {
            for (int j=i+1; j<n ;j++)
            {
                if (arr[i]>arr[j])
                {
                    sum=sum+1;
                }
            }
        }
        if (sum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    
    
    
    return 0;

}
