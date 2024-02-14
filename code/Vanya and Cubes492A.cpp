#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,cnt=0,s=0,t=0,z=0;
    cin>>n;
    long long i=1;
    while(1)
    {
        sum=sum+i;
        cnt=cnt+sum;
        s++;
        if(cnt>=n)
        {
            break;
        }
        i++;

    }
    for(long long i=1;i<=s;i++)
    {
        t=t+i;
        z=z+t;
    }
    if(n<z)cout<<s-1;
    else cout<<s;

}
