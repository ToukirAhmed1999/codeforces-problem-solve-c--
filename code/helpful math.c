#include<stdio.h>
int main()
{
    char s[100];
    int a[100],i,j=0;   //1+2+3
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
      if(s[i]=='+'){
        continue;

      }

      else
      {
           a[j]=s[i]-'0';
           j++;
      }

    }
    for(i=0;i<j;i++)
    {
        for(int k=i+1;k<j;k++)
        {
            if(a[i]>a[k])
            {
                int x=a[i];
                a[i]=a[k];
                a[k]=x;
            }
        }
    }
    for(i=0;i<j;i++)
    {
        if(i==j-1)
        {
            printf("%d",a[i]);
        }
        else

            printf("%d+",a[i]);
    }



}
