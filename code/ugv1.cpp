#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
      long long n,m,s,t,a,b,c,i=0,x;
      cin>>n>>m>>s>>t;
      x=m;
      long long  arr[m];
      while(x--)
      {
         cin>>a>>b>>c;
         arr[i++]=c;
      }
      sort(arr,arr+m);
      if(m==1)cout<<"Case #1:"<<arr[0]<<endl;
      else if(m==0)cout<<"Case #3:"<<"unreachable"<<endl;
      else cout<<"Case #2:"<<arr[m-1]-arr[0]<<endl;
    }
}
