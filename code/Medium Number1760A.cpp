#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
       cin>>a>>b>>c;
       if((a>b&&a>b)&&(c<b&&c<a))cout<<b<<endl;
       else if((a>b&&a>c)&&(b<c&&b<a))cout<<c<<endl;
       else  if((b>a&&b>c)&&(c<b&&c<a))cout<<a<<endl;
        else  if((b>a&&b>c)&&(a<b&&a<c))cout<<c<<endl;
         else  if((c>a&&c>b)&&(a<b&&a<c))cout<<b<<endl;
          else  if((c>a&&c>a)&&(b<a&&b<c))cout<<a<<endl;




    }
}
