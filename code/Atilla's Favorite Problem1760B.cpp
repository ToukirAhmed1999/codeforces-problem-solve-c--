#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<abs(s[n-1]-96)<<endl;
    }
}
