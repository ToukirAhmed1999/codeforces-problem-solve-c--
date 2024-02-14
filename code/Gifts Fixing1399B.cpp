#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,g,h,x,y;
    cin>>t;

    while(t--)
    {
        cin>>n;
        long long a[2*n];
        for(i=0; i<2*n; i++)
        {
            cin>>a[i];
        }
        x=a[0];
        for(i=0; i<n; i++)
        {
            if(a[i]<x)x=a[i];

        }
        y=a[n];
        for(i=n; i<2*n; i++)
        {
            if(a[i]<y)y=a[i];

        }
        long long j=0,k=0,l=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>=x&&a[i+n]>=y)
            {
                g=a[i]-x;
                h=a[i+n]-y;
                if(g<=h)j=j+((g+h)-g);
                else j=j+((g+h)-h);


            }
            else if(a[i]>=x)
                k=k+(a[i]-x);
            else if(a[i+n]>=y)
                 l=l+(a[i+n]-y);
        }
        cout<<j+k+l<<endl;



    }

}

