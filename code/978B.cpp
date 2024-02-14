#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int i,f=0,cnt=0;
    for(i=0;i<x;i++)
    {
        if(s[i]=='x')
        {
            cnt++;
            if(cnt>2)
            {
                f++;

            }
        }
        else if(s[i]!='x')cnt=0;
    }
    cout<<f;

}

