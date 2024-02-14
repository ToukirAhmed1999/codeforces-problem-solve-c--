#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0,c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                sum=sum+a[i];
            }
            else if(a[i]%2!=0)
            {
                c=c+a[i];
            }
        }
        if(sum>c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}
