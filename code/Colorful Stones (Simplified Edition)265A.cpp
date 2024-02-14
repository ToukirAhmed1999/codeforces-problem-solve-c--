#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i=0,j;
    for(j=0;j<t.size();j++)
    {
      if(t[j]==s[i])i++;
    }
    cout<<i+1;

}
