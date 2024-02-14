#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,w,h;
    cin>>t;
    while(t--)
    {
        cin>>w>>h>>n;
        long long cnt=1;
        if(w%2==0)
        {
            while(1)
            {
                w=w/2;cnt*=2;
                if(w%2!=0)break;
            }
        }
        if(h%2==0)
        {
            while(1)
            {
                h=h/2;cnt*=2;
                if(h%2!=0)break;
            }
        }
        if(cnt>=n||n==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
