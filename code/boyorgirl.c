#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int i,j,count=0;
    for(i=0;i<strlen(s);i++)
        {for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {
                count++;
                break;
            }
        }
        }
        int x=strlen(s)-count;
        if(x%2==0)
        {
            printf("CHAT WITH HER!");
        }

        else
            printf("IGNORE HIM!");


}
