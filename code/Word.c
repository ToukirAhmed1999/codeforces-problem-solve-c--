#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int i, count=0,sum=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            count++;
        }
        if(s[i]>='a'&&s[i]<='z')
        {
           sum++;
        }
    }
    if(count==sum)
    {
        printf("1..%s",strlwr(s));
    }
   else if(count>sum)
    {
        printf("2..%s", strupr(s));
    }
   else if(count<sum)
    {
        printf("3..%s", strlwr(s));
    }

}

