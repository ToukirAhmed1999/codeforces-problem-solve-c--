#include<stdio.h>
int main()
{
    int n,i,x,z,sum=0;
    scanf("%d",&n);
    int a[1000];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            x=i;
            break;
        }

    }
    for(i=x; i<=n; i++)
    {
        if(a[i]==-1)
        {
            z=i;
        }
    }
    for(i=x; i<=z; i++)
    {
        sum=sum+a[i];
    }

    if(sum<0)
    {
        printf("%d",abs(sum)+x);
    }
    else
        printf("%d",x);


}
