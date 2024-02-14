#include<stdio.h>
int main()
{
    long long n,k,i;
    scanf("%lli%lli",&n,&k);
    for(i=1;i<=k;i++)
    {
        if(n%10!=0)
        {
            n--;
//            if(n%10==0)
//            {
//                n=n/10;
//            }
        }
        else if(n%10==0)
        {
            n=n/10;
//            if(n%10!=0)
//            {
//                n--;
//            }

        }
    }
    printf("%lli",n);
}
