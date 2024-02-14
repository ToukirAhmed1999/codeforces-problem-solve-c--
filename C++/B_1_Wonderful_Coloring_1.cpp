#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int cnt=0,x,y;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {   
            x=count(s.begin(),s.end(),s[i]);
            for(j=i+1;j>0;j--)
            {
                if(s[i]==s[j])
                {
            
            if(x>2)
            {
              y=(s.size()-x)+2;
            } 
                }
            }
            
            
            
        }
    
       

        
       
        //else  cout<<(s.size())/2<<endl;

        
            
        
       
    }
}