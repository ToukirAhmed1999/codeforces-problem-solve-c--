#include<stdio.h>
int main()
{
    int  k,n,w,i,sum=0;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    if((sum-n)<0)
    {
        printf("0");
    }
    else{
       printf("%d",(sum-n));

    }

}



