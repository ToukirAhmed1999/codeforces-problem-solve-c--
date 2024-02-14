#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        int cnt=0,f=0,g=0;
        cin>>a>>b>>c>>d;
        if(a<b)cnt=1;
        if(a<c)f=1;
        if(a<d)g=1;
        cout<<cnt+f+g<<endl;

    }
}
