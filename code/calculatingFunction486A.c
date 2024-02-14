#include<stdio.h>
int main()
{
    long long n,x;
    scanf("%lli",&n);
    if(n%2==0)
    {
        x=n/2;

    }
    else
        x=-(n+1)/2;
    printf("%lli",x);
}

