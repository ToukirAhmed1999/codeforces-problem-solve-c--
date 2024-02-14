#include<stdio.h>
int main()
{
    int n,x,t,a[1000],count=0,i;
    scanf("%d",&n);
    t=n+1;
    while(t>0)
    {   x=t;
        for(int i=3;i>=0;i--)
        {
        a[i]=x%10;
        x=x/10;

        }
       if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3])
       {
           count=1;
       }
        if(count==1)
        { break;

        }
          t++;


    }
    for(i=0;i<4;i++)
 {
     printf("%d",a[i]);
 }

}

