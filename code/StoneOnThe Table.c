#include<stdio.h>
int main()
{
    int n,count=0;
    scanf(" %d ",&n);
    char s[100];
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    printf("%d",count);


}
