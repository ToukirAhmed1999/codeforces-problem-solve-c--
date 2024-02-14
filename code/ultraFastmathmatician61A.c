#include<stdio.h>
int main()
{
    char s1[1000000];
    scanf("%s",&s1);
    char s2[1000000];
    scanf("%s",&s2);
    for(int i=0;i<strlen(s1);i++)
    {
        if(s1[i]==s2[i])
        {
            printf("0");

        }
        else
            printf("1");
    }
}
