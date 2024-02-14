#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a;
        cin>>a;
        string b;
        cin>>b;
        int cnt=0;
        for(i=0;i<n;i++)
        {
            if((a[i]==b[i])||(a[i]=='B'&&b[i]=='G')||(a[i]=='G'&&b[i]=='B'))cnt++;
        }
        if(cnt==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
