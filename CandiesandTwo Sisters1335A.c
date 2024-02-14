#include<stdio.h>
int main()
{
    long long n,x,i,a;
    scanf("%lli",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lli",&a);
        x=a/2;
        if(a%2==0)
        {
           printf("%lli\n",x-1);
        }
      else
         printf("%lli\n",x);
    }
}
