#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,h,e,l,o,f=0,m,c=0,a=0,b=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='h')
        {
            h=i;
            break;
        }
    }
    for(i=h+1;i<s.size();i++)
    {
        if(s[i]=='e')
        {
            e=i;
            f=1;break;
        }

    }
    for(i=e+1;i<s.size();i++)
    {
        if(s[i]=='l')
        {
            l=i;a=1;break;
        }

    }
    for(i=l+1;i<s.size();i++)
    {
        if(s[i]=='l')
        {
            m=i;c=1;break;
        }

    }
    for(i=m+1;i<s.size();i++)
    {
        if(s[i]=='o')
        {
            o=i;b=1;break;
        }

    }
    if(f==1&&a==1&&b==1&&c==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}









