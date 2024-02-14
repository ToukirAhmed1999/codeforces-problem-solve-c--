#include<stdio.h>
int main()
{
    char s1[1000];
    char s2[1000];
    char s3[1000];
    scanf("%s %s %s",&s1,&s2,&s3);

    strcat(s1,s2);
    int cnt=0;
    for(int i=0; i<strlen(s1); i++) {
          for(int j=0; j<strlen(s3); j++) {
            if(s1[i]==s3[j]) {
                s3[j]='.'; cnt++;
                break;

            }
          }

    }
    // printf("%s\n and count=%d and s1 size=%d",s3,cnt,strlen(s1));
    if(cnt==strlen(s1) && strlen(s1)==strlen(s3)) printf("YES");
    else printf("NO");

    // printf("\n"); main();



}
