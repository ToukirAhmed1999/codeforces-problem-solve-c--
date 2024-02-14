#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i;
    cin>>n>>m;
    long long a[n+m];
    for(i=0;i<n+m;i++)
    {
        cin>>a[i];

    }
    sort(a,a+(m+n));
    for(i=0;i<n+m;i++)cout<<a[i]<<" ";



}
