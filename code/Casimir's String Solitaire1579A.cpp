#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=count(s.begin(),s.end(),'A');
        int y=count(s.begin(),s.end(),'B');
        int z=count(s.begin(),s.end(),'C');
        if(y==x+z)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}
