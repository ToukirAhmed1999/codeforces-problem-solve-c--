#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,cnt=0;
        cin>>n;
        string s[n];
        for(i=0;i<n;i++)cin>>s[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<s[i].size();j++)
            {
                for(k=j+1;k<s[i].size();k++)
                {
                    if(s[i][j]==s[i][k])cnt++;
                }
                cout<<cnt+1<<endl;
            }
        }
        
               

    }
}