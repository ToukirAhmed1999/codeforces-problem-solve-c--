#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t,i;
   cin>>t;
   while(t--)
   {
    int x=0,m=0;
    string s;
    cin>>s;
    if(s[0]=='Y'||s[0]=='e'||s[0]=='s')
    {
    for(i=0;i<s.size()-1;i++)
    {
       if(s[i]=='Y'&&m==0)
       {
         if(s[i+1]!='e')
         {cout<<"NO"<<endl;x=1;m=1;}
       }
       else if(s[i]=='e'&&m==0)
       {
         if(s[i+1]!='s')
         {cout<<"NO"<<endl;x=1;m=1;}
       }
       else if(s[i]=='s'&&m==0)
       {
         if(s[i+1]!='Y')
          {cout<<"NO"<<endl;
          x=1;
          m=1;}
       }
    }
    }   
   else {x=1;cout<<"NO"<<endl;}

    if(x==0)cout<<"YES"<<endl;   

    
    
   }
    
}
