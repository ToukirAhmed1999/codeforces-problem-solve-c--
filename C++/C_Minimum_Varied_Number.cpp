#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z,p,q,r,s,a,b,c,d;
        cin>>n;
        if(n>9&&n<18)
        {
           cout<<n-9<<9;
        }
        else if(n>17&&n<25)
        {
           cout<<n-17<<8<<9;
        }
         else if(n>24&&n<31)
        {
           cout<<n-24<<7<<8<<9;
        }
        else if(n>30&&n<36)
        {
           cout<<n-30<<6<<7<<8<<9;
        }
        else if(n>35&&n<40)
        {
           cout<<n-35<<5<<6<<7<<8<<9;
        }
        else if(n>39&&n<43)
        {
           cout<<n-39<<4<<5<<6<<7<<8<<9;
        }
        else if(n>42&&n<45)
        {
           cout<<n-42<<3<<4<<5<<6<<7<<8<<9;
        }
        else if(n>44&&n<46)
        {
           cout<<n-44<<2<<3<<4<<5<<6<<7<<8<<9;
        }
        else cout<<n;
        cout<<endl;

    }
}
