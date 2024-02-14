#include<stdio.h>
int main()
{
    int n,count=0,x,y,z,s,t;
    scanf("%d",&n);
    if(n>=100)
    {
        x=n%100;
        count=count+n/100;
        if(x>=20);
        {
            y=x%20;
            count=count+x/20;
            if(y>=10)
            {
                z=y%10;
                count=count+y/10;
                if(z>=5)
                {
                    s=z%5;
                  count=count+z/5+s;



                }
            }
        }
        printf("%d",count);
    }
    else if(n>=20);
    {
        y=n%20;
        count=count+n/20;
        if(y>=10)
        {
            z=y%10;
            count=count+y/10;
            if(z>=5)
            {
                s=z%5;
                count=count+z/5+s;
            }
        }

    else if(n>=10)
    {
        z=n%10;
        count=count+n/10;
        if(z>=5)
        {
            s=z%5;
            count=count+z/5+s;
        }
    }
    else if(n>=5)
    {
        s=n%5;
        count=count+n/5+s;
    }
    else if(n>1)
    {
        t=n%1;
      count=count+n/1+t;
    }



}}
