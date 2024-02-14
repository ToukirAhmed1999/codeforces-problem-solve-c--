#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        string s;
        cin>>s;
        int j,x=0,sum=0,y;
        for(i=0;i<s.size();i++)
        {
            for(j=0;j<26;j++)
            {
                if(a[j]==s[i])
                {
                     sum=sum+abs(x-(j+1));
                     x=j+1;


                }
                if(a[j]==s[0])y=j+1;
            }
        }
        cout<<abs(sum-y)<<endl;

    }
}
