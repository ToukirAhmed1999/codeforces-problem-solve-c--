#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,y,n,i,m,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        i=n-y;
        m=i/x;
        z=(m*x)+y;


        cout<<z<<endl;

    }
}
