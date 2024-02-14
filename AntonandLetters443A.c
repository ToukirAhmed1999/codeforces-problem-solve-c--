#include<stdio.h>
int main()
{
    int cnt=0,i,j,sum;
    char s[1000];
    gets(s);
    int x=strlen(s)-1;
    for(i=1; i<x; i=i+3)
    {
        for(j=i+3; j<x; j=j+3)
        {
            if(s[i]==s[j])
            {
                cnt++;
                break;



            }



        }


    }
    sum=strlen(s)/3;
    printf("%d\n",sum-cnt);
}

