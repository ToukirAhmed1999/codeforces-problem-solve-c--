#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
       char s1[10];
       cin>>s1;
       strlwr(s1);
       char  s2[]="yes";
       if(strcmp(s1,s2)==0)
       {
           cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;




    }
}
