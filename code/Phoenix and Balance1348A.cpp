#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
       cin>>n;
       long long a[n],j=0;
       for(i=1;i<=n;i++)
       {
          a[j]=pow(2,i);
          j++;
       }
       long long sum=0,cnt=0,x,y,z;
       x=(n/2)-1;
       for(i=0;i<n;i++)
       {
         z=a[i];
       }

       for(i=0;i<x;i++)
       {
           sum=sum+a[i];
       }
       for(i=x;i<n-1;i++)
       {
           cnt=cnt+a[i];
       }
       cout<<abs((sum+z)-cnt)<<endl;

    }
}

