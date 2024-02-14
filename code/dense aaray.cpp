#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int cnt=0,s=0,d=0;
        for(int i=0;i<n-1;i++)
        {
            float x=max(a[i],a[i+1]);
            float y=min(a[i],a[i+1]);
            if(x/y>2)
            {
            while(y<x)
            {
                y=y*2;
                cnt++;
                s=1;


            } cnt=cnt-1;
            }



        }
        cout<<cnt<<endl;




    }
}
