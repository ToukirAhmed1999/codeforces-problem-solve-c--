#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,x,y,z,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int x=max(a,max(b,c));
        if(a==b&&b==c)cout<<1<<" "<<1<<" "<<1<<endl;
        else if(a==b&&a==x)
        {
            cout<<1<<" "<<1<<" "<<abs(c-x)+1<<endl;
        }
        else if(b==c&&b==x) cout<<abs(a-x)+1<<" "<<1<<" "<<1<<endl;
        else if(a==c&&c==x) cout<<1<<" "<<abs(b-x)+1<<" "<<1<<endl;
        else
        {
            y=abs(a-x);
            if(y==0)cout<<y<<" ";
            else cout<<y+1<<" ";
            z=abs(b-x);
            if(z==0)cout<<z<<" ";
            else cout<<z+1<<" ";
            k=abs(c-x);
            if(k==0)cout<<k<<endl;
            else cout<<k+1<<endl;

        }



    }
}
