#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,n,x,h;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        h=((n-2)/x)+1;
        if(n==1||n==2)cout<<1<<endl;
        else
            cout<<ceil(h)<<endl;

    }
}
