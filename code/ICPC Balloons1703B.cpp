#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string x;
        cin>>x;
        sort(x.begin(), x.end());
        int cnt = unique(x.begin(), x.end()) - x.begin();
        cout<<(cnt*2)+(n-cnt)<<endl;
    }
}
