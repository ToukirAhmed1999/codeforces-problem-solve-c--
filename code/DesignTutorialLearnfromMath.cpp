#include<bits/stdc++.h>
using namespace std;
int notprime(long long n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }

    }return 0;
}
int main()
{
   int n;
   cin>>n;
   if(notprime(n-4)==1)cout<<4<<" "<<n-4;
   else if(notprime(n-6)==1)cout<<6<<" "<<n-6;
   else if(notprime(n-8)==1)cout<<8<<" "<<n-8;


}

