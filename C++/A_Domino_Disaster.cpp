#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='U')s[i]='D';
            else if(s[i]=='D')s[i]='U';
        }
         for(i=0;i<n;i++)cout<<s[i];
         cout<<endl;
    }
}