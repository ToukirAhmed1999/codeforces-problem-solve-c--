#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long r,c,n;
        cin>>r>>c>>n;
        //if((r*c)==n)cout<<n<<endl;
     if(n%r==1)
        {
            cout<<(n/r)+1<<endl;
        }
        else if(n%r==0)
        {
            cout<<(n/r)+((n-1)*c)<<endl;
        }
        else if((n%r!=1)&&(n%r!=0))
        {
            cout<<((n/r)+1)+(((n%r)-1)*c)<<endl;
        }

    }
}

