#include<stdio.h>
int main()
{
    int n,i,x,y,j,count=0;
    scanf("%d",&n);
    int a[1000],b[1000],c[1000];
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);

    }
    scanf("%d",&y);
     for(i=0;i<y;i++)
    {
        scanf("%d",&b[i]);

    }

    for(i=0;i<x;i++)
    {
        c[i]=a[i];
    }

    for(i=x,j=0;j<y;i++,j++)
    {
        c[i]=b[j];
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<x+y;j++)
        {
            if(c[j]==i)
            {count++;
            break;}
        }
    }
    if(count==n)
    {
        printf("I become the guy.");
    }
    else
        printf("Oh, my keyboard!");


}
