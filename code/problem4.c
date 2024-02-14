#include<stdio.h>
int main()
{
    int a[1000],n,i,x,count=0,sum=0;
    scanf("%d %d",&n,&x);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++)
    {
        if(a[x-1]==0)
        {
            if(a[x-1]<a[i])
            {
                count++;
            }


        }

        else if(a[x-1]<=a[i])
        {
            count++;

        }





    }

    printf("%d",count);






}
