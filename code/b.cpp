#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,l,w,h;
    cin>>t>>l;
    while(t--)
    {
        cin>>w>>h;
        if(w<l||h<l)cout<<"Try another one"<<endl;
        else if(w>l||h>l)cout<<"Crop it"<<endl;
        else if(w==l||h==l)cout<<"Accepted"<<endl;

    }
}
