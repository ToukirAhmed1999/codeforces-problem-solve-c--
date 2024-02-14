#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0,s=0,d=0,h=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i=i+2)
        {
            if(a[i]%2==0)cnt++;
            else if(a[i]%2!=0)s++;
        }
        for(i=1;i<n;i=i+2)
        {
            if(a[i]%2==0)d++;
            else if(a[i]%2!=0)h++;
        }
        if(n%2==0)
        {
            if((cnt==n/2)&&(h==n/2))cout<<"YES"<<endl;
            else if((s==n/2)&&(d==n/2))cout<<"YES"<<endl;
            else if((cnt==n/2)&&(d==n/2))cout<<"YES"<<endl; 
            else if((s==n/2)&&(h==n/2))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(n%2!=0)
        {
            if((a[0]%2==0)&&(cnt==(n/2+1))&&(h==n/2))cout<<"YES"<<endl;        
            else if((a[0]%2!=0)&&(s==(n/2+1))&&(d==n/2))cout<<"YES"<<endl;
            else if((a[0]%2==0)&&(cnt==(n/2+1))&&(d==n/2))cout<<"YES"<<endl; 
            else if((a[0]%2!=0)&&(s==(n/2+1))&&(h==n/2))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
}