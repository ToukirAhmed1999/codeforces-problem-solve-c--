#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,k,y,flag=0,cnt,l,t;
    cin>>t;
    while(t--){
            flag=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(i=1;i<n;i++){
            if(arr[i]-arr[i-1]>1)
                flag=1;
        }
        if(n==1)cout<<"YES";
       else if(flag==1)
            cout<<"NO";
        else cout<<"YES";

        cout<<endl;
    }

}
