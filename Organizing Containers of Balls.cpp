#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for (int k=0 ;k<q ;k++)
    {
        int n;
        cin >> n;
        long long int arr[n][n];
        long long int a[n];
        long long int b[n];
        long long int sum1 = 0;
        long long int sum2 = 0;
        for (int i=0 ;i<n ;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cin >> arr[i][j];
                a[i]=a[i]+arr[i][j];
                b[j]=b[j]+arr[i][j];
            }
        }
        sort(a,a+n);
        sort(b,b+n);
        int count=0;
        for (int i=0 ;i<n ;i++)
        {
            if (a[i]==b[i])
            {

            }
            else
            {
                count++;
                break;
            }
        }
        if (count==0)
        {
            cout<<"Possible"<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
        
        
    }
     
    return 0;
}
