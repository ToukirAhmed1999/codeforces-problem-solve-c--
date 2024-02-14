#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            x=b-a;
            if(x>10)
            {
                y=x/10;
                if(x%10==0)
                {
                    cout<<y<<endl;
                }
                else
                    cout<<y+1<<"\n";
            }
            else if(x<=10)
            {
                cout<<1<<endl;
            }

        }
        else if(a>b)
        {
             x=a-b;
            if(x>10)
            {
                y=x/10;
                if(x%10==0)
                {
                    cout<<y<<endl;
                }
                else
                    cout<<y+1<<endl;

            }
            else if(x<=10)
            {
                cout<<1<<endl;
            }


        }
        else if(a==b)
        {
            cout<<0<<endl;
        }
    }
}
