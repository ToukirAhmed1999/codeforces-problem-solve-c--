#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
    long long cnt=0,temp=0,i;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')cnt++;
        else if(s[i]=='0')temp++;
    }
    if(s.size()==1)cout<<"0"<<endl;
    //else if(cnt==temp&&cnt>1&&temp>1)cout<<1<<endl;
    else if(cnt==temp)cout<<cnt-1<<endl;
    else if(cnt<temp)cout<<cnt<<endl;
    else if(cnt>temp)cout<<temp<<endl;
    else cout<<0<<endl;
    
    }
   

}