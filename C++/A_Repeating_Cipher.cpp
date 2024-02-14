#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i=i+x)
    {
      
        cout<<s[i];
        x=i;
        i++;
        
    }
}