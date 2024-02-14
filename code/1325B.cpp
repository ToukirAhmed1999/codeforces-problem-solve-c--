
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v;
        for(i=0; i<n; i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());for(i=0;i<v.size();i++)cout<<v<<endl;
        int Count =unique(v.begin(), v.end()) - v.begin();
        cout<<Count<<endl;

    }




}

