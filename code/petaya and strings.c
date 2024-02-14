#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];
    int checker=0;
    int i;
    gets(s1);
    gets(s2);
    for(i=0;i<strlen(s1);i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]>s2[i])
        {   checker=1;
            printf("1\n"); break;
        }
        else if(s1[i]<s2[i])
        {    checker=1;
            printf("-1\n");break;
        }
    }
   if(checker==0)  printf("0\n");

}
