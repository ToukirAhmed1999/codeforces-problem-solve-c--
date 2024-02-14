#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,q=0,a=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='Q')q++;
        else if(s[i]=='A')a++;
    }
    cout<<(q-1)*a<<endl;
}
