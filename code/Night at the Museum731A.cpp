#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k;
        int l,d,cnt=0;
        char s[120];

        cin>>s;
        l=strlen(s);

        d=abs(s[0]-'a');
        if(d<=13)
            cnt+=d;
        else
        {
            cnt+=(26-d);
        }


        for(i=0;i<l-1;i++)
        {
            d=abs(s[i]-s[i+1]);

            if(d<=13)
                cnt+=d;
            else
            {
                cnt+=(26-d);
            }
        }

        cout<<cnt;

        return 0;

}
