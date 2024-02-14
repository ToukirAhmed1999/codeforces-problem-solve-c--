#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        string b;
        int i,s=0,cnt=0;
        for(i=0;i<a.size();i+=2)
        {
            //b[s]=(char)a[i]; //cout<<a[i];
            b=b+a[i];
        }
         b+=a[a.size()-1];
        cout<<b<<endl;

    }
}
