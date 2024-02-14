#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
        {
            if(m%2==0)cout<<(m/2)<<endl;
            else if(m%2!=0)cout<<(m/2+1)<<endl;
        }
        else if(m==1)
        {
            if(n%2==0)cout<<(n/2)<<endl;
            else if(n%2!=0)cout<<(n/2+1)<<endl;
        }
        else if(n>=m)
        {
            if(n%2!=0&&m%2==0)
            {
                cout<<(n/2*m)+m/2<<endl;
            }
            else if(n%2!=0&&m%2!=0)
            {
                cout<<(n/2*m)+(m/2+1)<<endl;
            }
            else if(n%2==0&&m%2==0)cout<<n/2*m<<endl;
            else if(n%2==0&&m%2!=0)cout<<n/2*m<<endl;
        }
        else if(n<m)
        {
            if(n%2==0)
            {
                cout<<(n/2)*m<<endl;
            }
            else if(n%2!=0)
            {
                if(m%2==0) cout<<(n/2*m)+(m/2)<<endl;
                else if(m%2!=0)cout<<((m/2+1)+(n/2*m))<<endl;

            }

        }



    }


}
