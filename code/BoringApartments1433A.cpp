#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,x,p;
    cin>>t;
    while(t--)
    {
        cin>>n;x=(n%10)-1;p=x*10;
        int cnt=0;
        while(1)
        {
            n=n/10;
            cnt++;
            if(n==0)
            {
                break;
            }
        }
        int sum=0;
        for(i=cnt;i>0;i--)
        {
            sum=sum+i;

        }
        cout<<sum+p<<endl;

    }
}
