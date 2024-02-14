#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,p=0;
    cin>>n>>k;
    int a[n],b[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(k>=a[i])
        {
            k=a[i]+b[i];         
            
        }

        
    }
    cout<<k<<endl;
  }

}