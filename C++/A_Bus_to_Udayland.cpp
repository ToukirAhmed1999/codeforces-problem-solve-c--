#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
   char s[5][n];
   for(i=0;i<5;i++)
   {
    for(j=0;j<n;j++)
    {
      cin>>s[i][j];
    }

   }
   for(i=0;i<5;i++)
   {
    for(j=0;j<n;j++)
    {
      cout<<s[i][j];
    }

   }

}
   

