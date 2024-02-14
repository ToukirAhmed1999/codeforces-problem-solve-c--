#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,x,sum=0;
    cin>>n;
    long long a[100000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
     for(i=0;i<n;i++)
    {
        cout<<a[i];
    }

    for(i=n-1;i>0;i--)
    {


            x=abs(a[n-1]-a[i]);
            sum=sum+x;



    }
        cout<<sum;

}
