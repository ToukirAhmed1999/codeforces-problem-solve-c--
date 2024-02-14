#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6,x,y;
    cin>>k2>>k3>>k5>>k6;
    x=min(k2,min(k5,k6));
    y=min((k2-x),k3);
    cout<<(256*x)+(32*y)<<endl;

}