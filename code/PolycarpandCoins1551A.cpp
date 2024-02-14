#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n/3;
        if(n%3==0)
        {
            cout<<x<<" "<<x<<endl;
        }
        else if(n%3==1)
        {
            cout<<x+1<<" "<<x<<endl;
        }
        else if(n%3==2)
        {
            cout<<x<<" "<<x+1<<endl;
        }



    }
}
