#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,n,s,t;
    cin>>t;
    while(t--)
    {
       cin>>a>>b>>n>>s;
    int p=s/n,q=abs((s/n)-a);
    if(s/n<=a&&s%n<=b&&p+b<=s)
    {
        cout<<"YES"<<endl;
    }

    else if(p>=a&&q<=b&&p+q>=s)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

}
