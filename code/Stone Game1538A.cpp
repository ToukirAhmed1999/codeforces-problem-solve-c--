#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,r,s,l,g;
        cin>>n;
        vector<int>v;
        for(i=0; i<n; i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        vector<int>::iterator it;
        vector<int>::iterator it2;
        it=max_element(v.begin(),v.end());
        it2=min_element(v.begin(),v.end());
        int x =it-v.begin();
        int y =it2-v.begin();
        if((x==0&&y==n-1)||(x==n-1&&y==0))cout<<2<<endl;
        else if(y<x&&y+1==x&&(y-0)<((n-1)-y))cout<<y+2<<endl;
        else if(y<x&&y+1==x&&(y-0)>=((n-1)-y))cout<<(n-y)<<endl;
        else if(y<x&&y+1==x&&(y-0)==((n-1)-y))cout<<y+1<<endl;
        else if(y<x)
        {
            int z=(y-0);
            int f=((n-1)-x);
            int z2=((n-1)-y);
            int f2=(x-y);
            if(z<z2)r=z;
            else r=z2;
            if(f2<f)s=f2;
            else if(f2==f)
            {
                if(r==0)s=f2;
                else s=f2+1;
            }
            else
            {
                if(r==0)s=1+f;
                else s=r+f;
            }
            cout<<r+s+1<<endl;


        }
        else if(x<y&&x+1==y&&(x-0)<((n-1)-x))cout<<x+2<<endl;
        else if(x<y&&x+1==y&&(x-0)>((n-1)-x))cout<<(n-x)<<endl;
        else if(x<y&&x+1==y&&(x-0)==((n-1)-x))cout<<x+1<<endl;
        else if(x<y)
        {
            int u=(x-0);
            int j=((n-1)-y);
            int u2=((n-1)-x);
            int j2=(y-x);
            if(u<u2)l=u;
            else l=u2;
            if(j2<j)g=j2;
            else if(j2==j)
            {
                if(l==0)g=j2;
                else g=j2+1;
            }
            else
            {
                if(l==0)g=1+j;
                else g=l+j;
            }
            cout<<g+l+1<<endl;
        }




    }
}
