#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=1,s=0,x,y,f,d=0,t,ans=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {

        if(a[i]<=a[i+1])
        {
            cnt++;
            
        }
        else {
            ans=max(cnt,ans);
            cnt=1;
        }
        
    }
     ans=max(cnt,ans);

   cout<<ans;
    

}

