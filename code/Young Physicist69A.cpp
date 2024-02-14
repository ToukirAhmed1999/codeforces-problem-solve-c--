#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,cnt=0,j;
    cin>>t;
    int a[3*t];
    for(i=0;i<3*t;i++)cin>>a[i];
    for(i=0;i<3*t;i++)
    {
        for(j=i+3;j<3*t;j+=3)
        {
            a[i]=a[i]+a[j];
        }
    }cout<<a[i]<<endl;
    //if(cnt==t)cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;



}

