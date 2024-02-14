#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(b<c)
        {
            x=(c-b)+c;
            if(a<x)cout<<1<<endl;
            else if(a>x)cout<<2<<endl;
            else if(a==x)cout<<3<<endl;
        }
        else if(c<b)
        {
           if(a<b)cout<<1<<endl;
           else if(a>b)cout<<2<<endl;
           else if(a==b)cout<<3<<endl;

        }





    }
}
