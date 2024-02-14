#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,z,a,b,n;
        cin>>x>>y>>z>>a>>b;
        if(x>=a&&y>=b)cout<<"YES"<<endl;
        else if(x<a&&y>=b)
        {
            if((a-x)<=z)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
         else if(y<b&&x>=a)
        {
            if((b-y)<=z)cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }
        else if(x<a&&y<b)
        {
          n=(a-x)+(b-y);
          if(n<=z)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;

    }
}