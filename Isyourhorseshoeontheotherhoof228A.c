#include<stdio.h>
int main()
{
    int a[100000],i,j,count=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
           {
             if(a[i]==a[j])
            {
                count++;
            }
           }
        }
        if(count==1||count==2)
        {
            printf("%d",count);
        }

        else if(count%2!=0)
        {
            printf("%d",count-1);
        }
        else if(count%2==0)
        {
            printf("%d",count/2);
        }





}
