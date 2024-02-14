#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("%d",a);
    }
    else
        printf("%d",b);

    x=abs(a-b);
    printf(" %d",x/2);

}
