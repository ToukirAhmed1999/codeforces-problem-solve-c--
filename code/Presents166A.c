#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[100];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
           if(a[j]==i)
           {
              printf("%d ",j);
           }
       }
    }}


