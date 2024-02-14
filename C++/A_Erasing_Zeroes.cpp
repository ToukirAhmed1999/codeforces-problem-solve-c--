#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,x,y,cnt=0,p=0;
       
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {x=i;
            break;}
            if(s[i]=='0')p++;
        }
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {y=i;
            break;}
        }
       for(i=x;i<=y;i++)
       {
        if(s[i]=='0')cnt++;
       }
       if(p==s.size())cout<<0<<endl;
       else if((s.size()==1)||(s.size()==2))cout<<0<<endl;
       else cout<<cnt<<endl;
       

    }
}