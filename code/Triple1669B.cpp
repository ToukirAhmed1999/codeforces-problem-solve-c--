#include<bits/stdc++.h>
using namespace std;
int solve(){
        long long n,i,j;
        cin>>n;
        long long a[n];
        long long cnt=0,x,f=0,y;
        for(i=0; i<n; i++)cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++){
                cnt=0;
            for(j=i;j<n;j++){
                if(a[i]==a[j])
                    cnt++;
                else break;
            }
            if(cnt>=3) {
                    cout<<a[i]<<endl;
                    return 0;
        }
        }
        cout<<"-1"<<endl;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {

solve();


    }
}
