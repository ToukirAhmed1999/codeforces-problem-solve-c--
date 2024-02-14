#include<stdio.h>
int main()
{
    int n,k,sum,x=0,cnt=0;
    scanf("%d %d",&n,&k);
    sum=240-k;
    for(int i=1;i<=n;i++)
    {
        x=x+5*i;
        if(x<=sum)
        {
            cnt++;
        }


    }
    printf("%d",cnt);

}
