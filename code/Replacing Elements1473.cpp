#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,b,i,f=0,c=0;
        cin>>n>>b;
        long long a[n];
        for(i=0; i<n; i++)cin>>a[i];
        sort(a,a+n);
        for(i=0; i<n; i++) if(a[i]<=b)f++;

        if(a[0]+a[1]<=b)c=1;

        if(f==n||c==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
