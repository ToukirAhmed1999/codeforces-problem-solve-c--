#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,cnt=0;
    cin>>t;
    int a[t];
    for(i=0; i<t; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<t; i++)
    {
        if(a[i]!=a[i+1])
        {
            cnt++;
        }

    }
    cout<<cnt;
}

