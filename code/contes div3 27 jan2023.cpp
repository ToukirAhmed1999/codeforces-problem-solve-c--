#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string a;
        int i,j,cnt=0;
        string b="314159265358979323846264338327";
        cin>>a;
        for(i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                cnt++;
            }
            else break;
        }
        cout<<cnt<<endl;

    }
}
