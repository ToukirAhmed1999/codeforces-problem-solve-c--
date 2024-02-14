#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,s=0,cnt=0;
        string a;
        cin>>a;
        string b;
        cin>>b;
         if((a[a.size()-1]==b[b.size()-1])&&((a[a.size()-1]=='S')||(a[a.size()-1]=='M')))
        {
            for(i=0;i<a.size();i++)
            {
                if(a[i]=='X')s++;
            }
             for(i=0;i<b.size();i++)
            {
                if(b[i]=='X')cnt++;
            }
            if(cnt==s)cout<<"="<<endl;
            else if(s>cnt)cout<<"<"<<endl;
            else if(s<cnt)cout<<">"<<endl;
        }
        else if(a[a.size()-1]==b[b.size()-1])
        {
            for(i=0;i<a.size();i++)
            {
                if(a[i]=='X')s++;
            }
             for(i=0;i<b.size();i++)
            {
                cnt++;if(b[i]=='X')
            }
            if(cnt==s)cout<<"="<<endl;
            else if(s>cnt)cout<<">"<<endl;
            else if(s<cnt)cout<<"<"<<endl;
        }
        else if(a[a.size()-1]=='S'&&b[b.size()-1]=='M')cout<<"<"<<endl;
        else if(a[a.size()-1]=='M'&&b[b.size()-1]=='L')cout<<"<"<<endl;
        else if(a[a.size()-1]=='M'&&b[b.size()-1]=='S')cout<<">"<<endl;
        else if(a[a.size()-1]=='L'&&b[b.size()-1]=='M')cout<<">"<<endl;
        else if(a[a.size()-1]=='S'&&b[b.size()-1]=='L')cout<<"<"<<endl;
        else if(a[a.size()-1]=='L'&&b[b.size()-1]=='S')cout<<">"<<endl;

    }
}