#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[1000];
        int sum=0,f=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]<0)f=1;
        }
        if(f==1)cout<<1<<endl;

        else cout<<abs(sum-n)<<endl;

    }
}
