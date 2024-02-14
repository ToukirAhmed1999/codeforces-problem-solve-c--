#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
            cnt=0;

    }

    if(cnt>=6)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

