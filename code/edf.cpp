#include<iostream>
using namespace std;

int main() {
  long long t,i,j,k;

  cin>>t;
  while(t--) {
    int mn=INT_MAX,mx=0;
    int mnind=INT_MAX,mxind=0;
    long long arr[4];
    for(i=0; i<4; i++) {
       cin>>arr[i];
       if(arr[i]>mxind){
         mx=i; mxind=arr[i];
       }
       if(arr[i]<mnind) {
        mn=i; mnind=arr[i];
       }
    }
    if((mx==0 && mn==3) || (mx==3 && mn==0) || (mx==1 && mn==2) || (mx==2 && mn==1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }

}
