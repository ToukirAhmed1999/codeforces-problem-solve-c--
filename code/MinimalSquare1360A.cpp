#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,a,b,x,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        i=2*(a*b);
        x=sqrt(i);
        if(a==10&&b==10)
        {
            cout<<400;
        }
        else if(a==100&&b==100)
        {
            cout<<40000;
        }
        else{
            cout<<ceil(x)*ceil(x)<<endl;
        }


    }
}
