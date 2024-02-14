#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0,p=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='L')cnt++;
        else if(s[i]=='R')p++;
    }
    cout<<cnt+p+1;
}