#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,x,y;
    cin>>t;
    while(t--)
    {
       for(i=1;i<=8;i++)
       {
        string s;
        cin>>s;
        for(j=0;j<8;j++)
        {
            if(s[j]=='#'&&s[j+1]=='.'&&s[j+2]=='#')
            {
                 x=i;
                 y=j+1;
            }
        }
       }
       cout<<x-1<<" "<<y+1<<endl;
    }
}