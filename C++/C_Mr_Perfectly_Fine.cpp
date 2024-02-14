#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,a,cnt=0,tmp=0;
        cin>>n;
        vector<long long>v1,v2,v3;
        string s;
        for(i=0;i<n;i++)
        {
            cin>>a>>s;
            if(s=="10")v1.push_back(a);
            if(s=="01")v2.push_back(a);
            if(s=="11")v3.push_back(a);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        if(v3.size())cnt=v3[0];
        if((v1.size())&&(v2.size()))tmp=v1[0]+v2[0];
        if((cnt)&&(tmp))cout<<min(cnt,tmp)<<endl;
        else if(cnt)cout<<cnt<<endl;
        else if(tmp)cout<<tmp<<endl;
        else cout<<"-1"<<endl;

        
    }
}