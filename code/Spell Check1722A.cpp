#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        int flg=0,cnt=0,x=0,y=0,z=0;
        cin>>n;
        string s;
        cin>>s;
        if(s.size()==5)
        {
            for(i=0;i<5;i++)
            {
                if(s[i]=='T')flg++;
                else if(s[i]=='i')cnt++;
                 else if(s[i]=='m')x++;
                  else if(s[i]=='u')y++;
                   else if(s[i]=='r')z++;

            }
        }
        if(flg==1&&cnt==1&&x==1&&y==1&&z==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
