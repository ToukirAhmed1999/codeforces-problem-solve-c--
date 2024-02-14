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
       string p;
       cin>>p;
       int i,x,f=0;
       for(i=0;i<s.size();i++)
       {
           if(p[0]==s[i])
           {
               x=i;
               if((x+1)%2!=0)f=1;


           }
       }
       if(f==1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

   }

}
