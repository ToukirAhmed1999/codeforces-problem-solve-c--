#include<stdio.h>
int main()
{
    int n,i,a,b,j,s,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a%b==0)
        {
            printf("0");
        }
        else
        {

            j=a%b;
            s=a-j;
            sum=(s+b)-a;
            printf("%d\n",sum);

        }

    }
}
