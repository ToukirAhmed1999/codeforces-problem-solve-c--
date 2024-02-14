#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,cnt=0;
    cin>>n;
    x=n/2;
    if(n%2!=0)
    {
        long long i=x+1,j=x;
        while(1)
        {
            if(i%j==0)cnt++;
            if(j==1)break;
            i++;j--;
        }
        cout<<cnt;
    }
    else  if(n%2==0)
    {
        long long i=x,j=x;
        while(1)
        {
            if(i%j==0)cnt++;
            if(j==1)break;
            i++;j--;
        }
        cout<<cnt;
    }


}
