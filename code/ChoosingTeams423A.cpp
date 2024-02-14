#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,cnt=0;
    cin>>n>>k;
    long long a[100000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=(5-k))
        {
            cnt++;
        }
    }
    cout<<cnt/3;

}

