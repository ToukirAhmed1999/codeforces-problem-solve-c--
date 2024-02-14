#include<stdio.h>
int main()
{
    int n,i,j,k,l,count=0,sum=0;
    scanf("%d",&n);
    int a[1000],b[1000];
    scanf("%d",&a[0]);
    for(i=1;i<=a[0];i++)
    {
        scanf("%d",&a[i]);
    }
     for(j=1;j<=a[0];j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=n;i<=1;i--)
    {
        for(k=1;k<=a[0];k++)
        {
            if(a[k]==i)
            {
                count=1;
                k++;

            }
        }
    }
    for(i=n;i<=1;i--)
    {
        for(l=1;l<=b[0];l++)
        {
            if(b[l]==i)
            {
                sum=1;
                l++;

            }
        }
    }
    if(count==1||sum==1)
    {
        printf("I become the guy.");
    }
    else
        printf("Oh, my keyboard!");
}
