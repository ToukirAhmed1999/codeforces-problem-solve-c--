#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
      cin>>n;
      vector<int>v;
      for(i=0;i<n;i++)
      {
          int k;cin>>k;
          v.push_back(k);
      }
      int cnt=0;
      for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(v[i]==v[j])
              {cnt++;break;}
          }
      }
      if(cnt>0)cout<<"NO"<<endl;
      else  cout<<"YES"<<endl;
    }
}
