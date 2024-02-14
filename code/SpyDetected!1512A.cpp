#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x;
    int a[10000];
    cin>>t;
    while(t--)
    {
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
               if(a[i]!=a[i+1])
               {
                   if(a[i+1]==a[i+2])
                   {

                       cout<<i+1<<endl;break;
                   }
                   else
                   {
                       cout<<i+2<<endl; break;
                   }
               }



       }
    }
}
