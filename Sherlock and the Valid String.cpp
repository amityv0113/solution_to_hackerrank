#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long int n=s.size();
    long int arr[26]={0};
    for(long int i=0 ;i<n ;i++)
    {
        int b=int(s[i])-97;
        arr[b]++;

    }
    int flag=0;
    int flag1=0;
    long int count=0;
    sort(arr,arr+26);
    int temp=0;
    for (int i=0 ;i<25 ;i++)
    {
        if (arr[i]==0)
        {
            continue;
        }
        else 
        {
            if (arr[i]!=arr[i+1])
            {
                temp++;
                if (arr[i]==1)
                {
                    flag=arr[i];
                }
                else
                {
                    flag=0;
                }
                count=count+abs(arr[i+1]-arr[i]);
                if (count>1 )
                {
                    if (flag==1 && flag1==0)
                    {
                        continue;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                    
                }
            }
            else
            {
                if (temp!=0)
                {
                   temp++;
                   if (temp>1)
                   {
                       if (flag==1 && flag1==0)
                       {
                           int temp1=0;
                           for(int j=i; j<25 ;j++)
                           {
                               if (arr[j]!=arr[j+1])
                               {
                                   temp1++;
                               }
                           }
                           if (temp1==0)
                           {
                               cout<<"YES"<<endl;
                               break;
                           }
                           else
                           {
                               cout<<"NO"<<endl;
                               break;
                           }
                           
                       }
                       else
                       {
                           cout<<"NO"<<endl;
                       }
                       break;
                   }
                }
                flag1++; 
            }
        }
    }
    if (count<=1 && temp<2)
    {
        cout<<"YES"<<endl;
    }
    
return 0;
}
