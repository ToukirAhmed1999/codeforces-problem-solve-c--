#include<stdio.h>
int main()
{
    int n,p,q,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if(abs(p-q)>=2)
        {
            count++;
        }

    }
    printf("%d",count);
}
