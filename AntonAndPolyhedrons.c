#include<stdio.h>
int main()
{
    int n,i,x,count=0;
    scanf("%d",&n);
    char s[1000];
    for(i=0; i<n; i++)
    {
        scanf("%s",&s);
        if(strcmp(s,"Cube")==0)
        {
            x=6;
        }
        else  if(strcmp(s,"Tetrahedron")==0)
        {
            x=4;
        }
        else if(strcmp(s,"Octahedron")==0)
        {
            x=8;
        }

        else if(strcmp(s,"Dodecahedron")==0)
        {
            x=12;
        }
        else  if(strcmp(s,"Icosahedron")==0)
        {
            x=20;
        }
        count=count+x;
    }

    printf("%d",count);
}

