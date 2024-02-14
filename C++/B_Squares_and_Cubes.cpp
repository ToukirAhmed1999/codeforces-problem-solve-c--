#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long i,cnt=0,s=0;
        for(i=1;i<=n;i++)
        {
            if((i*i)>n)break;
            else cnt++;
        }
        for(i=2;i<=n;i++)
        {
            if((i*i*i)>n)break;
            else s++;
        }

        cout<<cnt+s<<endl;
    }
}