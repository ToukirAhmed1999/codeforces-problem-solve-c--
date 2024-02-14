#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        long long cnt1=0,cnt2=0,cnt3=0,m1=0,m2=0,m3=0,temp1=0,temp2=0,temp3=0,g=0;
        cin>>n;
        string a1[n];
        string a2[n];
        string a3[n];
        for(i=0;i<n;i++)
        {
            cin>>a1[i];

        }
        for(i=0;i<n;i++)
        {
            cin>>a2[i];

        }
        for(i=0;i<n;i++)
        {
            cin>>a3[i];

        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                  if(a1[i]==a2[j]&&a2[j]==a3[k])
                  {
                      g++;
                  }

            }
        }}

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a1[i]==a2[j])
                {
                    cnt1++;

                }
            }
        }
         for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a1[i]==a3[j])
                {
                    cnt1++;

                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a2[i]==a3[j])
                {
                    cnt2++;

                }
            }
        }
         for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a2[i]==a1[j])
                {
                    cnt2++;

                }
            }
        }
         for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a3[i]==a2[j])
                {
                    cnt3++;

                }
            }
        }
         for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a3[i]==a1[j])
                {
                    cnt3++;

                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a1[i]!=a2[j])m1++;

            }
            for(j=0;j<n;j++)
            {
                if(a1[i]!=a3[j])m1++;

            }
            if(m1==n*2)temp1++;
            m1=0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a2[i]!=a1[j])m2++;

            }
            for(j=0;j<n;j++)
            {
                if(a2[i]!=a3[j])m2++;

            }
            if(m2==n*2)temp2++;
            m2=0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a3[i]!=a2[j])m3++;

            }
            for(j=0;j<n;j++)
            {
                if(a3[i]!=a1[j])m3++;

            }
            if(m3==n*2)temp3++;
            m3=0;
        }
        cout<<cnt1-(g*2)+(temp1*3)<<" "<<cnt2-(g*2)+(temp2*3)<<" "<<cnt3-(g*2)+(temp3*3)<<endl;







}

}
