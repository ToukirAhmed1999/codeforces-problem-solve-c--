#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x=0,y=0,i,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0; i<n; i++)
        {
            if(s[i]=='U')
            {
                x=x+1;
            }
            else if(s[i]=='D')
            {
                x=x-1;
            }
            else if(s[i]=='R')
            {
                y=y+1;
            }
            else if(s[i]=='L')y=y-1;
            if(x==1&&y==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}

