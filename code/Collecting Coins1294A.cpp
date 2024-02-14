#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,y,z,m;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z>>n;
        if(x>=y&&x>=z)
        {
            m=(x-y)+(x-z);
        }
        else if(y>=x&&y>=z)
        {
            m=(y-x)+(y-z);
        }
        else if(z>=y&&z>=x)
        {
            m=(z-y)+(z-x);
        }
        if(n>=m)
        {
            if((n-m)%3==0)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else if(n<m) cout<<"NO"<<endl;


    }
}
