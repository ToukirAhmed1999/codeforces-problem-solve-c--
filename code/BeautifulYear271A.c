#include<stdio.h>
int main()
{
   int n,i,x,a[10000];
   scanf("%d",&n);
   x=n+1;
   while(x>0)
   {
       for(i=3;i>=0;i++)
       {
           a[i]=x%10;
           x=x/10;

       }
       for(i=0;i<4;i++)
       {
           if(a[i]!=a[i+1])
           {
               break;
           }
       }
       x++;

   }
   printf("%d",a[i]);
}
