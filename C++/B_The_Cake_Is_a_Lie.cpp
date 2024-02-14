#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int x=n-1;
        int y=m-1;
        int l=x+(y*n);
        if(l==k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}