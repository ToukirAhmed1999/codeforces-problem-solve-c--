#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,x;
        cin>>n>>m;
        x=(n/2)+n;
        if(x==n)cout<<endl;
        else{
        while(1)
        {
             x=(x/2)+x;
             if(x==n)
             {
                break; 
                cout<<"YES"<<endl;
             }

        }
        }
        
    }
}
