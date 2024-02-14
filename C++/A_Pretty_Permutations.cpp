#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            int k=1,i;
            for(i=0;i<n/2;i++)
            {
                cout<<k+1<<" "<<k<<" ";
                k=k+2;
                
            }
        }
        else
        {
            int k=1,i;
            for(i=0;i<=n/2;i++)
            {
                if(i==(n/2)-1)cout<<n-1<<" ";
                else if(i==n/2)cout<<n<<" "<<n-2<<" ";
                else{
                     cout<<k+1<<" "<<k<<" ";
                }
                     k=k+2;
                
                
                
            }
            
        }
        cout<<endl;
    }
}