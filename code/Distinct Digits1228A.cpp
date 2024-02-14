#include<bits/stdc++.h>
using namespace std ;

bool isd(int n)
{
    int x,m,flg=0,i,j;
    int a[10000];
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        a[flg]=x;
        flg++;

    }
    int c=0;
    for(i=0; i<flg; i++)
    {
        for(j=i+1; j<flg; j++)
        {
            if(a[i]==a[j])c=1;
        }


    }
    if(c==1)return false;
    else return true;
}

int main()
{
    int n,h,i,flg=0;
    cin>>n>>h;
    for(i=n; i<=h; i++)
    {
        if(isd(i))
        {
            cout<<i;flg=1;
            break;
        }

    }
    if(flg==0)cout<<-1;




}



