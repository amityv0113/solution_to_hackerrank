#include<bits/stdc++.h>
using namespace std;
void rev(long long int arr[],long int n ,long int p,long int q)
{
    while(q>p)
    {
        long long int temp =arr[p];
        arr[p]=arr[q];
        arr[q]=temp;
        q--;
        p++;
    }
}
int main()
{
    long long int n,d;
    cin>>n>>d;
    long long int arr[n];
    for (long int i= 0;i<n ;i++)
    {
        cin>>arr[i];
    }
    rev(arr,n,0,d-1);
    rev(arr,n,d,n-1);
    rev(arr,n,0,n-1);
    for (long int i=0 ;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}