#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
        long long x,cnt=0,i,n,ans;
        cin>>x;
        n=x;
        while(x!=0)
        {
            cnt++;
            x=x/10;
        }
        ans=abs(n-pow(10,cnt-1));
        cout<<ans<<endl;

    }
}
