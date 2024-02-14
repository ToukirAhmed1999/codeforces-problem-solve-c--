#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long cnt=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)cnt++;
        }
        long long sum=0,x=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==2)sum++;
            x=x+a[i];
        }
        if(cnt%2==0&&sum%2==0)cout<<"YES"<<endl;
        else if(x%2==0&&sum%2!=0&&cnt%2==0&&cnt>0)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
