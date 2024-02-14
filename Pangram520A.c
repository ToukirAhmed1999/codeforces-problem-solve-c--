#include<stdio.h>
int main()
{
    int n,i,j,flg=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    strcpy(strupr(a),a);
    for(i=0; i<strlen(a); i++)
    {
       for(j=i+1;j<strlen(a);j++)

      {
          if(a[i]==a[j])
          {
             flg++;
             break;
          }

        }

      }
      int x=(n-flg);
    if(x==26)
    {
        printf("YES");
    }
    else
        printf("NO");


}
