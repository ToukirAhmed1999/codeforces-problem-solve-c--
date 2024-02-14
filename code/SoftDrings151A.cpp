#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,x,y,i;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=(k*l)/nl;
    y=c*d;
    i=p/np;
    if(x<=y&&x<=i)
    {
        cout<<x/n;
    }
    else if(y<=x&&y<=i)
    {
        cout<<y/n;
    }
     else if(i<=x&&i<=y)
    {
        cout<<i/n;
    }




}
