#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        long long sum=0,x;
        for(i=0;i<n;i++)
        {
            x=a[i]-a[0];
            sum=sum+x;

        }
        cout<<sum<<endl;
    }

}
