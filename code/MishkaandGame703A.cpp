#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    int cnt=0,tmp=0;
    while(n--)
    {
        cin>>x>>y;
        if(x>y)
        {
            cnt++;
        }
        else if(x<y)
        {
            tmp++;
        }


    }
    if(cnt>tmp)
    {
        cout<<"Mishka"<<endl;
    }
    else if(tmp>cnt)
    {
        cout<<"Chris"<<endl;
    }
    else if(cnt==tmp)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
}
