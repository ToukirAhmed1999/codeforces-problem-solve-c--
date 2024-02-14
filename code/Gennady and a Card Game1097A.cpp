#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,flg=0;
    string s;
    cin>>s;
    string a;
    cin>>a;
    string b;
    cin>>b;
    string c;
    cin>>c;
    string d;
    cin>>d;
    string e;
    cin>>e;
    for(i=0;i<2;i++)
    {
        if(s[i]==a[i])
        {cout<<"YES"<<endl;flg=1;break;}
        else if(s[i]==b[i])
        {cout<<"YES"<<endl;flg=1;break;}
        else if(s[i]==c[i])
        {cout<<"YES"<<endl;flg=1;break;}
        else if(s[i]==d[i])
        {cout<<"YES"<<endl;flg=1;break;}
        else if(s[i]==e[i])
        {cout<<"YES"<<endl;flg=1;break;}


    }
    if(flg==0)cout<<"NO"<<endl;

}

