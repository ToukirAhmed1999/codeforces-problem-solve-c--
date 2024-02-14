#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,w,h;
    cin>>t;
    while(t--)
    {
        long long cnt=0;
        cin>>w>>h;
        while(w!=h)
        {
            if(w>h)
            {
                w=w-h;
                cnt++;

            }
            else if(w<h)
            {
                h=h-w;
                cnt++;
            }
        }
        cout<<cnt+1<<endl;
    }
}
