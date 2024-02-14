#include<stdio.h>
int main()
{
    long long n,h,a[1000],count=0,sum=0,i;
    scanf("%lli %lli",&n,&h);
    for( i=0;i<n;i++)
    {
        scanf("%lli",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=h)
        {
            count++;
        }
        else if(a[i]>h)
        {
            sum=sum+2;
        }
    }
    printf("%lli",count+sum);
}
