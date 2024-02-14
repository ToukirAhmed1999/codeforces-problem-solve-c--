#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],j;
        for(int i=0; i<n; i++)cin>>a[i];
        for(j=0;j<n;j++)
        {
            int x;
            cin>>x;
            string s;
            cin>>s;

            int i;

                for(i=0; i<x; i++)
                {
                    if(s[i]=='D'&&a[j]==9)
                    {
                        a[j]=0;
                    }
                    else if(s[i]=='U'&&a[j]==1)a[j]=0;
                    else if(s[i]=='U'&&a[j]==0)a[j]=9;
                    else if(s[i]=='D')a[j]++;
                    else if(s[i]=='U')a[j]--;


                }
                cout<<a[j]<<endl;


        }

        }

    }

