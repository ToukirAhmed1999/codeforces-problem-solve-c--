#include<stdio.h>
int main()
{
    int n,i,count=0,j,sum=0;
    scanf("%d",&n);
    int a[1000];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x=a[0],y=a[0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[i]<a[j])
            {

                if(x>a[i])
                {
                    x=a[i];
                    count++;
                }

            }
            else if(a[i]>a[j])
            {

                if(y<a[i])
                {
                    y=a[i];
                    sum++;
                }
            }



        }
    }
    printf("%d",count+sum);
}
