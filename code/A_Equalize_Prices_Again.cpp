#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,i,sum=0,q=0;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
       if(sum%n==0)cout<<sum/n<<endl;
       else cout<<(sum/n)+1<<endl;
        


    }
}