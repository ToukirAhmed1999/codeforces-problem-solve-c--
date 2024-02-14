#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,k,x,y;
        cin>>a;
        cin>>b;
        cin>>k;
        x=max(a,b);
        y=min(a,b);
        
        if((k==0)&&(a==b))cout<<"YES"<<endl;
        else if((k==0)&&(a!=b))cout<<"NO"<<endl;
        else if(x%y==0)
        {
           if(((x/y)-1)<=k)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }       
        else if(x%y!=0)
        {
           if((((x/y)+1)-1)<=k)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
}