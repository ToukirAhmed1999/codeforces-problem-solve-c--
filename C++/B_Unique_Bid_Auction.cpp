#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x=MAX_PATH,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((a[i]!=a[j])&&(i!=j))
                {
                   y=a[i];
                }
                
            
            }
        }
        cout<<y<<endl;
       
       
       
    }
}
