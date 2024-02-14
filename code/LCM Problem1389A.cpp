#include<bits/stdc++.h>
using namespace std;
bool tou (long long x,long long y)
{
    long long g,l;
    g=__gcd(x,y);
    l=x*y/g;
    if(l>0)return true;
    else return false;
}
int main()
{
    long long s,t,i,j,n;
    cin>>n;
    while(n--)
    {
       cin>>s>>t;
    for(i=s; i<=t; i++)
    {
        for(j=t; j>=t; t--)
        {
            bool c;
            c=tou(i,j);
            if(c==true)
            {
                cout<<i<<" "<<j<<endl;
                break;
            }
            if(i+1==j)
            {
                cout<<-1<<" "<<-1<<endl;

            }

        }
    }

    }


}
