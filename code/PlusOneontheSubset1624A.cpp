#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       cout<<abs(a[0]-a[n-1])<<endl;
    }
}
