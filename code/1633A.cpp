#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,cnt=0,y,z;
        cin>>n;
        int p=n;
        while(p!=0)
        {
            p=p/10;
            cnt++;
        }
        y=(n/7)+1;
        z=7*y;
        int o=z/pow(10,(cnt-2));
        int k=n/pow(10,(cnt-2));
        if(n==10||n==12||n==13)cout<<14<<endl;
        else if(n==11)cout<<14<<endl;
        else if(n%7==0)cout<<n<<endl;
        else if(o!=k)
                {
                    cout<<(n/7)*7<<endl;
                }
        else cout<<z<<endl;



    }
}
