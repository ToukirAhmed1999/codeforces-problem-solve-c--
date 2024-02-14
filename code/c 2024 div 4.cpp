#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,i,x,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        x=n-1;
        for(i=0;i<n/2;i++)
        {
            if((s[i]=='0'&&s[x]=='0')||(s[i]=='1'&&s[x]=='1'))break;
            else if((s[i]=='1'||s[i]=='0')&&(s[x]=='1'||s[x]=='0'))
            {
                cnt++;

            }

            x--;
        }
        cout<<abs(n-(cnt*2))<<endl;

    }
}
