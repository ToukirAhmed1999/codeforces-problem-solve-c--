
#include<bits/stdc++.h>
using namespace std; 

long long factorial(long long s)
{
    
    return (s==1 || s==0) ? 1: s * factorial(s - 1); 
   
}
int main()
{
    long long n,x;
    cin>>n>>x;
    int s=min(n,x);
    cout<<factorial(s);
    return 0;
}