#include<bits/stdc++.h>
using namespace std;
int main()
{   long long k, l;
    long long a[100000];
    long long b[100000];
    long long c[100000];
    vector<int> v;
    long long n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>k; v.push_back(k);
    }
    long long x=count(v.begin(),v.end(),3);
     long long y=count(v.begin(),v.end(),2);
      long long z=count(v.begin(),v.end(),1);
      if(x<=y&&x<=z)
      {
          l=x;
          cout<<x<<endl;
      }
     else if(y<=x&&y<=z)
      {
          l=y;
          cout<<y<<endl;
      }
     else if(z<=y&&z<=x)
      {
          l=z;
          cout<<z<<endl;
      }
      long long j=0;
      for(i=0;i<=n;i++)
      {

           if(v[i]==1)
           {
                a[j]=i;
                j++;

           }




      }
      long long g=0;
      for(i=0;i<n;i++)
      {
          if(v[i]==2)
          {
              b[g]=i;
              g++;
          }


      }
      long long m=0;
      for(i=0;i<n;i++)
      {
          if(v[i]==3)
          {
              c[m]=i;
              m++;
          }


      }
      for(i=0;i<l;i++)
      {
          cout<<a[i]+1<<" "<<b[i]+1<<" "<<c[i]+1<<endl;
      }



}
