#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string x;
    cin>>x;
    for(i=0;i<x.size();i++)
    {
        if(x[i]=='.'&&x[i+1]=='-')
        {
            cout<<0;
        }
        else if(x[i]=='.'&&x[i+1]=='.')
        {
            cout<<0;
        }

        else if(x[i]=='-'&&x[i+1]=='.')
        {
            cout<<1;i++;
        }
        else if(x[i]=='-'&&x[i+1]=='-')
        {
            cout<<2;i++;
        }
       else if(x[x.size()-1]=='.'&&x[x.size()-2]=='-')
        {
            cout<<0;
        }
        else if(x[x.size()-1]=='.'&&x[x.size()-2]=='.')
        {
            cout<<0;
        }
        else if(x.size()==1)
        {
            cout<<0;
        }
    }
}
