#include<stdio.h>
int main()
{
    int n,i,j,st=0,ans=0;
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        st=st-a[i][0]+a[i][1];
        if(ans<st)
        {
            ans=st;
        }
    }
    printf("%d",ans);


}
