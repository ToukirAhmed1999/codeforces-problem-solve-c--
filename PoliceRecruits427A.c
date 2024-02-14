#include<stdio.h>
int main()
{
    int n,i,cnt=0,x,sum=0,z=0,d;
    scanf("%d",&n);
    int a[10000];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        {
            cnt++;
        }
    }
    for(i=n; i>=0; i--)
    {
        if(a[i]==-1)
        {
            x=i;
            break;
        }
    }
    for(i=x;i>=0;i--)
    {
        if(a[i]>0)

        {
          sum=sum+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            z=abs(z+a[i]);
        }
        else if(a[i]>0)
        {
            break;
        }


    }

      int c=abs((z+1)-cnt);
       if(sum>c)
       {
           printf("%d",z+1);
       }
       else
       {
           d=c-sum;
           printf("%d",d+z+1);
       }


}




