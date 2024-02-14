#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x,k,flg=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char a[10000];
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
                if(s[i]!=s[i+1])
                {
                    x=j;a[0]=s[i];
                    for(k=x;k<s.size();k++)
                    {
                        if(s[k]==s[i])
                        {
                            flg=1;
                        }
                    }

                }

            }
        }
        if(flg==1)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;


    }
