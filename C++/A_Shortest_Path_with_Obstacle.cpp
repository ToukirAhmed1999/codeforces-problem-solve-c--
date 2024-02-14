#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,a2,b,b2,f,f2;
        cin>>a>>a2>>b>>b2>>f>>f2;
        if((a==b)&&(min(a2,b2)<f2)&&(max(a2,b2)>f2))
        {
           cout<<abs(a2-b2)+2<<endl;
        }
        else if((a2==b2)&&(min(a,b)<f)&&(max(a,b)>f))
        {
           cout<<abs(a-b)+2<<endl;
        }
        else{

            cout<<abs(a-b)+abs(a2-b2)<<endl;
        }

    }
}