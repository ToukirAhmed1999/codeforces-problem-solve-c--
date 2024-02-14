#include<stdio.h>
int main()
{
    int  n,i,x,j;
    scanf("%d %d",&n,&x);
    char s[n],a;
    scanf("%s",&s);
    for(j=0;j<x;j++)
    {
        for(i=0;i<strlen(s)-1;i++){

        if(s[i]=='B'&&s[i+1]=='G')
        {
            a=s[i];
            s[i]=s[i+1];
            s[i+1]=a; i++;

        }}
    }
    printf("%s",&s);
}
