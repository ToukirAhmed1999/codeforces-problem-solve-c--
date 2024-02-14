#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    char s[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        if(s[1]=='+')
        {
            x++;

        }
        else if(s[1]=='-')
        {
            x--;
        }

    }
    printf("%d",x);

}
