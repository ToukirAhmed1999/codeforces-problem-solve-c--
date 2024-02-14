#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,y,z,l,sum=0;
    cin>>n;
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int tmp1,tmp2;
    for(i=0;i<n;i++)
    {
       tmp1=s1[i]-'0';
       tmp2=s2[i]-'0';
       x=abs(tmp1-tmp2);
       if(tmp1<tmp2)
        {
            y=abs(tmp1-0);
            z=abs(tmp2-10);
        }
        else  if(tmp2<tmp1)
        {
            y=abs(tmp2-0);
            z=abs(tmp1-10);
        }
        l=y+z;
        if(x<l)sum=sum+x;
        else sum=sum+l;

    }
    cout<<sum<<endl;


}

