#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
       cin>>x>>y>>z;
       if(x>=y&&x>=z)
       {
           if(y+z==x)
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
       }
       else if(y>=x&&y>=z)
       {
           if(x+z==y)
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
       }
       else if(z>=y&&z>=x)
       {
           if(y+x==z)
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
       }
    }
}
