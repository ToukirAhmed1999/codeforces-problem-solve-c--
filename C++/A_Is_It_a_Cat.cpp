#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,c=0,b=0,a=0,d=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n-1;i++)
        {
            if((s[i]=='M'||s[i]=='m')&&(s[i+1]=='E'||s[i+1]=='e'))c=1;
            else if((c==1)&&(s[i]=='E'||s[i]=='e')&&(s[i+1]=='O'||s[i+1]=='o'))b=1;
            else if((b==1)&&(s[i]=='O'||s[i]=='o')&&(s[i+1]=='W'||s[i+1]=='w'))a=1;
            



        }
        if((a==1)&&(s[s.size()-1]=='W'||s[s.size()-1]=='w')&&(s[0]=='M'||s[0]=='m'))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
}