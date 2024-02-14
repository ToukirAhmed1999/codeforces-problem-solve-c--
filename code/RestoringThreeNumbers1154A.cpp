#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,f=0,k=0,j=0,h=0;
    cin>>x1>>x2>>x3>>x4;
    if(x1>x2&&x1>x3&&x1>x4)
    {
        f=1;
    }
    else if(x2>x1&&x2>x3&&x2>x4)
    {
        k=1;
    }
    else if(x3>x1&&x3>x2&&x3>x4)
    {
        j=1;
    }
    else if(x4>x1&&x4>x2&&x4>x3)
    {
        h=1;
    }
    if(f==1)
    {
       cout<<x1-x2<<" "<<x1-x3<<" "<<x1-x4;
    }
    else if(k==1)
    {
       cout<<x2-x1<<" "<<x2-x3<<" "<<x2-x4;
    }
    else if(j==1)
    {
       cout<<x3-x1<<" "<<x3-x2<<" "<<x3-x4;
    }
    else if(h==1)
    {
       cout<<x4-x1<<" "<<x4-x2<<" "<<x4-x3;
    }



}
