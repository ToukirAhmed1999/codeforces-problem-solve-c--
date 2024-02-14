#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,cnt,x;
  cin>>t;
  while(t--)
  {
      cin>>n;
      cnt=0;
      int i=1;
      while(cnt!=n){
        if(i%3==0||i%10==3)
            {
                i++;
                continue;
            }
        else cnt++;
        i++;
      }
      cout<<i-1<<endl;
  }
}
