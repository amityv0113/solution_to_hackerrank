#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        long int n1,n2;
        n1=s1.size();
        n2=s2.size();
        long int arr1[26]={0};
        long int arr2[26]={0};
        for (long int i=0 ;i<n1 ; i++)
        {
            int b=int(s1[i])-97;
            arr1[b]++;
        }
        for (long int i=0 ;i<n2 ; i++)
        {
            int b=int(s2[i])-97;
            arr2[b]++;
        }
        int count=0;
        for (int i=0 ;i<26 ;i++)
        {
            if (arr1[i]!=0 && arr2[i]!=0)
            {
                count++;
                if (count>0)
                {
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
    return 0;
}
