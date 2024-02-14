#include<stdio.h>
int main()
{
    int n,nm=12,i,x,m=0,temp=0,nn=0,a[10000];
    scanf("%d",&n);
    x=n+1;

   while(1)
    {
        m=0;nn=0;
        temp=x;
        for(i=3; i>=0; i--)
        {
            a[i]=temp%10;
            temp=temp/10;
        }
        for(i=0; i<3; i++)
        {
            for(int j=i+1; j<4; j++)
            {
                if(a[i]==a[j])
                {
                    nn=900;
                    break;
                }

                if(a[i]!=a[j]&&i==2&&j==3)
                {
                    m=999;
                    break;
                }
            }
            if(nn==900)
                break;
        }
        if(m==999)
           break;
x++;
    }
    for(int i=0; i<4; i++)
    {
        printf("%d",a[i]);
    }

}
