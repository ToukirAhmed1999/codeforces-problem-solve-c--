#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,i,x,sum=0,cnt=0;
    vector <int> v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>k;
        v.push_back(k);
    }
    for(i=0;i<n;i++)
    {

        if(v[i]==-1)
        {
            if(sum>0)
            {
                sum--;
            }
            else
                cnt++;
        }
        else
            sum+=v[i];
    }
    cout<<cnt;





}
