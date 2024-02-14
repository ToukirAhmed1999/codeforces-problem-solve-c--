#include<stdio.h>
int main()
{
    char s[1100];
    gets(s);
    s[0]=toupper(s[0]);
    printf("%s",s);
}
