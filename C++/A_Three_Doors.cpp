#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,y,p=0,q=0;
        cin>>n;
        int a[3];
        for(i=0;i<3;i++)cin>>a[i];
        if(a[n-1]!=0)
        {x=a[n-1];p=1;}
        if((a[x-1]!=0)&&(p==1))
        {
            y=a[x-1];
            q=1;
            
        }
        if((a[y-1]==0)&&(q==1))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}