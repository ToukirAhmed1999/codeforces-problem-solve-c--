#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,flg=0;;
        cin>>n>>x;
        int a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+2*n);
        for(i=0;i<n;i++)
        {
            if(a[i+n]-a[i]>=x)
            {
                flg++;
            }
        }
        if(flg==n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
}
