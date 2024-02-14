#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],sum=0,cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)cnt++;
            else if(a[i]%2!=0)sum++;
        }
        if(cnt>=1&&sum>=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
