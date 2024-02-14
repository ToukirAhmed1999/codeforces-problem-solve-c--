#include<stdio.h>
int main()
{
    int n,i,count=0,j;
    scanf("%d",&n);
    int a[100000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                count++;
                break;


            }
            i++;

        }

    }
    printf("%d",count+1);
}
