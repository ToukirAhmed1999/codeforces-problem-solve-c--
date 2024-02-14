#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,i;
    cin>>t;
    while(t--)
    {
        int flg=0;
        string s;
        cin>>s;
        x=s.size();
        y=s.size()/2;
        if(x%2==0)
        {
            for(i=0; i<x; i++)
            {
                if(s[i]==s[i+y])
                {flg++;}

            }
        }
        if(flg>0&&flg==y)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}


