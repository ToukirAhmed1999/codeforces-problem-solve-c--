#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0,x=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {    
            
                cnt++;
                x=max(x,cnt);
               
            }
            else cnt=0;
        }
        cout<<x<<endl;

        
    }
}