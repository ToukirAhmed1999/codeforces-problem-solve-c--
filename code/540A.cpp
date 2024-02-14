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
    for(i=0;i<n;i++)
    {
        x=abs(s1[i]-s2[i]);
        if(s1[i]<s2[i])
        {
            y=abs((s1[i])-'0');
            z=abs((s2[i])-'0');
        }
        else  if(s2[i]<s1[i])
        {
            y=abs(s2[i]-'0');
            z=abs(s1[i]-'0');
        }
        l=y+z;
        if(x<l)sum=sum+x;
        else sum=sum+l;

    }
    cout<<sum<<endl;
}
