#include<bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int cnt=0;
    while(n>0)
    {
        cnt++;
        n/=10;
    }
    return cnt;

}
int main()
{
    long long n,tmp,x;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int digi=countDigit(n);
        int z=countDigit(n);
        int o=pow(10,digi-1);
        z=pow(10,z-2);
        x=(n/o)+z;
        if(n>=1&&n<=9)
        {
            cout<<n<<endl;
        }
        else if(digi<=3)
        {
            cout<<x+8<<endl;
        }
        else if(digi>3)
        {
            cout<<x+5+digi<<endl;
        }

    }


}


