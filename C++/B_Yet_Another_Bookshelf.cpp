#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,x,y,cnt=0,p;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {x=i;
            break;}
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[i]==1)
            {y=i;
            break;}
        }
       for(i=x;i<=y;i++)
       {
        if(a[i]==0)cnt++;
       }
       cout<<cnt<<endl;
       

    }
}