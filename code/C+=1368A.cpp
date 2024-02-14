#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,n;
    cin>>t;
    while(t--)
    {
       cin>>a>>b>>n;
       long long sum=0,cnt=0;
       while(sum<=n)
       {


              sum=a+b;
              b=max(a,b);
              a=sum;

              //cnt++;

          cnt++;
       }
       cout<<cnt<<endl;
    }
}
