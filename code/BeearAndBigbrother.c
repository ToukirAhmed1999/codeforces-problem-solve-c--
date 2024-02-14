#include<stdio.h>
int main()
{
    int x,y,i=0;
    scanf("%d%d",&x,&y);
    while(x<=y)
    {

        x=x*3;
        y=y*2;i++;


    }


    printf("%d",i);
}
