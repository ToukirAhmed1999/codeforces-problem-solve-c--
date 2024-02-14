#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n%2;
        y=n/2;
        cout<<x+y<<endl;
    }
}
