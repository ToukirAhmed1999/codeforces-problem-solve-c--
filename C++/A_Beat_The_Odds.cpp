#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {

        int n,i;
        cin>>n;
        int a[n],cnt=0,s=0;
        for(i=0;i<n;i++)cin>>a[i];
        
         for(i=0;i<n;i++)
         {
            if(a[i]%2!=0)cnt++;
         }
       
        
         for(i=0;i<n;i++)
         {
            if(a[i]%2==0)s++;
         }
        
        

       
        


        cout<<min(cnt,s)<<endl;
    }
    
}