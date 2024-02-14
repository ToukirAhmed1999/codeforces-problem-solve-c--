#include<stdio.h>
int main()
{
    char s[100];
    int n,y=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&s);
        if(s[1]=='+')
        {
            y++;
        }
        else if(s[1]=='-')
        {
            y--;
        }

    }
    printf("%d",y);
}
