#include<stdio.h>
int main()
{
    int k,r,x,y,cnt=0,flg=0,o=0;
    scanf("%d %d",&k,&r);
    int i=1;
    while(1)
    {
        x=k*i;
        if(x%10==0)
        {
            break;
        }

        else if(x%10!=0)
        {
            y=x-r;
            if(y%10==0)
            {
                break;
                flg=1;
           } i++;
        }
    }
    printf("%d",i);}

