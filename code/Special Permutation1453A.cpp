#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],j=2;
        a[n-1]=1;
        for(i=0;i<n-1;i++)
        {
            a[i]=j;
            j++;
        }
        for(i=0;i<n;i++)cout<<a[i]<<" ";

        cout<<endl;


    }
}
