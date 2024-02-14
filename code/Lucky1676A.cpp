#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,x,y,z;
    cin>>t;
    while(t--)
    {
      cin>>n;
      long long sum=0;
      for(i=1;i<=3;i++)
      {
         x=n%10; n=n/10;sum=sum+x;y=n;

      }
      long long cnt=0;
     for(i=1;i<=3;i++)
      {
         z=y%10; y=y/10;cnt=cnt+z;

      }
      if(cnt==sum)
      cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
}
