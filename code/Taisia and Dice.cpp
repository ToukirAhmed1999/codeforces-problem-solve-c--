#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,s,r;
    cin>>t;
    while(t--)
    {
        long long x,i,y;
       cin>>n>>s>>r;
       cout<<s-r<<" ";
       x=r%(n-1);
       if(x==0)
       {
           for(i=0;i<n-1;i++)cout<<r/(n-1)<<" ";
       }
       else
       {
          for(i=0;i<((n-1)-x);i++)cout<<r/(n-1) <<" ";
          for(i=0;i<x;i++)
          {
              cout<<(r/(n-1))+1 <<" ";
          }


       }
       cout<<endl;



    }
}
