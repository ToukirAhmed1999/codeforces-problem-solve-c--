#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,cnt=0;
    cin>>n;
    int a[10000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n;i>0;i=i-2)
    {
        sum=sum+a[i];
    }
    for(i=n-1;i>=0;i=i-2)
    {
        cnt=cnt+a[i];
    }

    cout<<cnt<<" ";
    cout<<sum;
}
