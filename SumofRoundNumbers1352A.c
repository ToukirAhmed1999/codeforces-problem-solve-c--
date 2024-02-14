#include <stdio.h>

int main()
{
    int n,i,k,count=0,x,sum,cnt=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&k);

     while(k!=0)
   {
       k=k/10;
       count++;
    for(i=1;i<=count;i++)
  {
      sum= pow(10,i);
  }
  if(k%sum!=0)
  {
      k=k%sum;
      cnt++;

  }}

  }
    printf("%d",cnt);
}


