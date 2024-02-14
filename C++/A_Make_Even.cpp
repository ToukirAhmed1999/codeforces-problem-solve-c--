#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,cnt=0,i,x,s,d=0;
        cin>>n;
        int y=n;
        while(y!=0)
        {
            y=y/10;
            cnt++;
        } 
        if(n%2==0)cout<<0<<endl;
        else{
           
          for(i=cnt;i>1;i--)
            {
                n=n/10;//cout<<n<<endl;
                x=n%10;//cout<<x<<endl;
                if(x%2==0)
                {
                    s=i;//cout<<s<<endl;
                }
                else if(x%2!=0)d++;
                
                   
                


            }
            if(d+1==cnt)cout<<-1<<endl;
            else if(s-1>2) cout<<2<<endl;
            else cout<<s-1<<endl;
           

            }
             
           
        }
      

        
      


    }
