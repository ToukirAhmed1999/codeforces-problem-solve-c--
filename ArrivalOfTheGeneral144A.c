#include<stdio.h>
int main()
{
    int n,i,j,max=0,min=0,temp;
    scanf("%d",&n);
    int a[1000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int chck=a[0];

    for(i=0; i<n; i++) {
        if(a[i]>chck) {
            chck=a[i]; max=i;
        }
    }
    for(i=max;i>=1;i--)
    {   printf("wprking");
        temp=a[i-1];
        a[i-1]=a[i];
        a[i]=temp;
    }

     chck=a[0];

    for(i=0; i<n; i++) {
        if(a[i]<=chck) {
            chck=a[i]; min=i;
        }
    }
    int sub=(n-min)-1;
    printf("%d ",max+sub);



}


