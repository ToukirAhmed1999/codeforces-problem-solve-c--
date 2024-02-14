#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int cnt=0,flg=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];

        }
        for(i=0; i<n; i+=2)
        {
            if(n==1&&a[0]%2!=0)
            {
                flg=1;
            }
            else if(a[i]%2!=0)
            {
                cnt++;
            }

        }
        if(flg==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }


    }
}
