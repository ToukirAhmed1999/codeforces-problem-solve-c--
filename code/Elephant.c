#include<stdio.h>
int main()
{
    long long x,sum;
    scanf("%lli",&x);
    if(x>5)
    {
        if(x%5!=0)
        {
            sum=x/5;
            printf("%d",(sum+1));
        }

    else if(x%5==0)
    {

        printf("%lli",(x/5));
    }}
    else
    {
        printf("1");
    }
}


