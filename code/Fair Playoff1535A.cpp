#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,y,s,p;
    cin>>t;
    while(t--)
    {
        int a[4];
        for(i=0;i<4;i++)
        {
            cin>>a[i];
            if(a[0]>a[1])
            {
                x=a[0];
            }
            else
                x=a[1];
            if(a[2]>a[3])
            {
                y=a[2];
            }
            else
                y=a[3];
        }
        sort(a,a+4);
        s=a[3]+a[2];
        p=x+y;
        if(s==p)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}

