#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,i,sum=0;
        cin>>p>>q;
        int a[p];
        for(i=0;i<p;i++)
        {cin>>a[i];
        sum=sum+a[i];
        }
        while(q--)
        {
            int l,k,r,cnt=0;
            cin>>l>>k>>r;
            for(i=l-1;i<k;i++)
            {
                cnt=cnt+a[i];
            }
            int x=abs(l-k);
            int g=(x+1)*r;
            int u=(sum-cnt)+g;
            if(u%2!=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

