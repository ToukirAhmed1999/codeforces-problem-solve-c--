#include<bits/stdc++.h>
using namespace std;

int main() {

   vector<int> v;
   int k;
   for(int i=1; i<=5; i++) {
     cin>>k;
     v.push_back(k);
   }

    for(int i=0; i<5; i++) {
       // cout<<v[i]<<endl;
   }
//   1 5 10 2 1

   cout<<*min_element(v.begin(),v.end())<<endl;
   cout<<*min_element(v.begin(),v.end())<<endl;
   cout<<"Number of 2"<<endl;
  int x=*find(v.begin(),v.end(),2);
   cout<<"Find "<<x<<endl;

   sort(v.begin(),v.end(),greater<int>());
   for(int i=0; i<5; i++) {
       cout<<v[i]<<" ";
   }


}
