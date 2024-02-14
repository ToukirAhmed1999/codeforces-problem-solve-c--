#include<stdio.h>
int main()
{
    int x1,x2,x3,x,y,z;
    scanf("%d %d %d",&x1,&x2,&x3);
    x=abs(x1-x2)+abs(x1-x3);
    y=abs(x2-x1)+abs(x2-x3);
    z=abs(x3-x1)+abs(x3-x2);
    if(x<y&&x<z)
    {
        printf("%d",x);
    }
    else if(y<x&&y<z)
    {
        printf("%d",y);
    }
    else if(z<x&&z<y)
    {
        printf("%d",z);
    }
}
