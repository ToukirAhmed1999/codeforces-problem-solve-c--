#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        x=abs(a-b);
        y=2*x;
        if(a<=y&&b<=y&&c<=y)
        {
            if(c<=x)cout<<c+x<<endl;
            else cout<<c-x<<endl;
        }
        else cout<<-1<<endl;


    }
}
