#include<stdio.h>
int main()
{
    int n,i,j,count=0,sum=0;
    scanf("%d",&n);
    int a[100][100];
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i][1]==a[j][0])
            {
                count++;
            }
        }
    }
    for(i=n-1; 0<=i; i--)
    {
        for(j=i-1; 0<=j; j--)
        {
            if(a[i][1]==a[j][0])
            {
                sum++;
            }
        }
    }
printf("%d",count+sum);
}
