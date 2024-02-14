#include<stdio.h>
int main()
{
    int n,count=0,sum=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='D')
        {
            count++;
        }
        else if(s[i]=='A')
        {
            sum++;
        }
    }
    if(sum>count)
    {
        printf("Anton");
    }
    else if(count>sum)
    {
        printf("Danik");
    }
    else if(sum==count)
    {
        printf("Friendship");
    }
}
