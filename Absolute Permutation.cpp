#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int k;
        cin>>k;
        long int arr[n];
        int count=0;
        long int count1=0;
        long int count2=0;
        for (long int i=0 ;i<n ; i++)
        {
            
            long int index=i+1;
           // if (index+k>n)
            //{
              //  count++;
                //break;
            //}
            
            if ( count1<k)
            {
                if (index+k<=n)
                {
                    arr[i]=index+k;
                    count1++;
                }
                else
                {
                    count++;
                    break;
                }
                
            }
            else if (index-k>=1 && count2<k)
            {
                arr[i]=index-k;
                count2++;
                if (count1==k && count2==k)
                {
                    count1=0; 
                    count2=0;
                }
            }
            else if (k==0)
            {
                arr[i]=index;
            }
            else
            {
                count++;
                break;
            }
            

      
        }
        if (count==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for (long int j=0 ;j<n ; j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        
        
    }
    return 0;
}
