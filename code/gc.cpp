#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],x,i;
    for(i=0;i<4;i++)cin>>a[i];
    sort(a,a+4);
    x=a[0]+a[1]+a[1]+a[1]+a[3];
    cout<<x;

}
