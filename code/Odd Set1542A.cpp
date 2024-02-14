#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        int cnt=0,sum=0;
        for(i=0;i<2*n;i++)
        {
            if(a[i]%2==0)cnt++;
            else if(a[i]%2!=0)sum++;
        }
        if(cnt==sum)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
