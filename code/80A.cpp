#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0,s=0,x,y;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {

        if(a[i]<=a[i+1])
        {
            cnt++;


        }
        else if(a[i]>a[i+1])
        {cnt=0;}
        if(s<cnt)
        {
            s=cnt;
        }
    }
    cout<<s<<endl;

}

