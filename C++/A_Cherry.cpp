#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n,x,i;
    cin>>n;
    long long  a[n];
    for(i=0;i<n;i++)cin>>a[i];
    long long ans=0;
    for(i=1;i<n;i++)
    {
        x=a[i]*a[i-1];
       ans=max(ans,x);
    }
    cout<<ans<<endl;

    }


}