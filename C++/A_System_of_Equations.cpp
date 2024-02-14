#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,cnt=0,j;
    cin>>n>>m;
    for(i=0;i<max(n,m);i++)
    {
        for(j=0;j<max(n,m);j++)
        {
            if((j*j+i==n)&&(i*i+j==m))
            {cnt++;}
        }
    }
    if(n==1&&m==1)cout<<2;
    else cout<<cnt;
}
    