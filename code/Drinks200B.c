#include<stdio.h>
int main()
{
    float n,i,sum=0,p,avg;
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%f",&p);
        sum=sum+p;
    }
    avg=sum/n;
    printf("%f",avg);

}
