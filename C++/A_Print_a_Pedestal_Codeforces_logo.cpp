#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n;
        x=n/3;
        if(n%3==0)cout<<x<<" "<<x+1<<" "<<x-1<<endl;
        else if(n%3==1)cout<<x<<" "<<x+2<<" "<<x-1<<endl;
        else if(n%3==2)cout<<x+1<<" "<<x+2<<" "<<x-1<<endl;



    }
}

