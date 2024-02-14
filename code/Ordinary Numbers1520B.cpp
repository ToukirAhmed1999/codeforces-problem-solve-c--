#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,cnt=0,x,y,z;
        cin>>n;
        if(n>=1&&n<=9)cout<<n<<endl;
        y=n;
        while(1)
        {

            y=y/10;
            cnt++;
            if(y==0)break;
            x=y;


        }
        z=n%10;
        long long a[1000],i,k=0;
        for(i=0; i<cnt; i++)
        {
            a[i]=1;
        }
        for (i = 0; i < cnt; i++)k = 10 * k + a[i];
        if(cnt==2&&x*k<=n)cout<<x+9<<endl;
        else if(cnt==2) cout<<(x-1)+9<<endl;
        if(cnt>2&&x*k<=n)cout<<((cnt-1)*9)+x<<endl;
        else if(cnt>2) cout<<((cnt-1)*9)+(x-1)<<endl;




    }
}
