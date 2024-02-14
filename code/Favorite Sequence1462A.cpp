#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        int b[n];
        if(n%2!=0)
        {
            b[n]=a[n/2];int j=0,k=1;
            for(i=0;i<n/2-1;i++)
            {
               b[j]=a[i];j=j+2;
            }
            for(i=n-1;i>n/2;i--)
            {
                b[k]=a[i];k=k+2;
            }
        }
        else if(n%2==0)
        {
            int j=0,k=1;
            for(i=0;i<n/2;i++)
            {
               b[j]=a[i];j=j+2;
            }
            for(i=n-1;i>n/2;i--)
            {
                b[k]=a[i];k=k+2;
            }
        }
        for(i=0;i<n;i++)cout<<b[i];
        cout<<endl;

    }

}
