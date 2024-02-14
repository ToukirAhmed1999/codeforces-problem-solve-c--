#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,x;
    cin>>t;
    long long e[100000];
    long long o[100000];
    while(t--)
    {
        cin>>n;
        x=n/2;
        if(x%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else if(x%2==0)
        {
            cout<<"YES"<<endl;
            int l=2,m=1;
            for(i=0;i<x;i++)
            {
              e[i]=l;
              l=l+2;
              cout<<e[i]<<" ";

            }
            for(i=0;i<x-1;i++)
            {
                o[i]=m;
                m=m+2;

            }
            o[x-1]=o[x-2]+(x+2);
            for(i=0;i<x;i++)
            {
                cout<<o[i]<<" ";
            }
            cout<<endl;

        }

    }

}

