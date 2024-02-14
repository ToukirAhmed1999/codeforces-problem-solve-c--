#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(x==z&&x>y)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<y<<endl;
        }
        else if(y==z&&y>x)
        {
            cout<<"YES"<<endl;
            cout<<y<<" "<<x<<" "<<x<<endl;
        }
        else if(x==y&&x>z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<z<<" "<<z<<endl;

        }
        else if(x==y&&y==z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<x<<endl;
        }
        else cout<<"NO"<<endl;


    }
}
