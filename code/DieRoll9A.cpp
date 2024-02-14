#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    if(a<=b)
    {
        x=(6-b)+1;
        if(a==1&&b==1)
        {
            cout<<1<<"/"<<1;
        }
        else if(x%2==0)
        {
            cout<<x/2<<"/"<<3;
        }
        else if(6%x==0)
        {
            cout<<1<<"/"<<(6/x);
        }
        else if(6%x!=0)
        {
            cout<<x<<"/"<<6;
        }

    }
    else if(a>b)
    {
        x=(6-a)+1;
        if(a==1&&b==1)
        {
            cout<<1<<"/"<<1;
        }
        else if(x%2==0)
        {
            cout<<x/2<<"/"<<3;
        }
        else if(6%x==0)
        {
            cout<<1<<"/"<<(6/x);
        }
        else if(6%x!=0)
        {
            cout<<x<<"/"<<6;
        }

    }

}
