#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[7],i,j,k;
        for(i=0;i<7;i++)
        {
            cin>>a[i];
        }
         for(i=0;i<7;i++)
         {
              for(j=i+1;j<7;j++)
              {
                   for(k=j+1;k<7;k++)
                   {
                       if((a[i]+a[j]+a[k])==a[6])
                       {
                           cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;break;
                       }
                   }
              }
         }




    }
}
