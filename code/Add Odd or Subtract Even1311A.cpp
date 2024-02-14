#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
          x=b-a;
          if(x%2==0)cout<<2<<endl;
          else if(x%2!=0)cout<<1<<endl;
        }
        else if(a>b)
        {
          y=a-b;
          if(y%2==0)cout<<1<<endl;
          else if(y%2!=0)cout<<2<<endl;
        }
        else if(a==b)cout<<0<<endl;

    }
}
