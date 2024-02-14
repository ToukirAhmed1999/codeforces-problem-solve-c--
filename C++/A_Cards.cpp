#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n,i,cnt=0,p=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='z')cnt++;
        if(s[i]=='n')p++;
    }
   
    for(i=0;i<p;i++)cout<<1<<" ";
 for(i=0;i<cnt;i++)cout<<0<<" ";

}
