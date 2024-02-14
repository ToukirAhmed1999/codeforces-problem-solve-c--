#include<stdio.h>
int main()
{
    char s[100];
    char n[100];
    scanf("%s",&s);
    scanf("%s",&n);
    int flag=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=n[strlen(n)-(i+1)])
        {
            flag=1; break;
        }
    }
    if(flag==1)
    {
        printf("NO");
    }
    else
        printf("YES");
}
