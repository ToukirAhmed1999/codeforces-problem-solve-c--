#include<stdio.h>
int main()
{
    long long x,y,i,j,v;
    scanf("%lli %lli",&x,&y);
    char a[x+10][y+10];
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            a[i][j]='#';
            v=i/2;
            if(i%2==0&&v%2!=0)
            {
                a[i][j]='.';
                a[i][y]='#';
            }
          else if(i%2==0&&v%2==0)
            {
                a[i][j]='.';
                a[i][1]='#';
            }

        printf("%c",a[i][j]);
        }
        printf("\n");
    }

}
