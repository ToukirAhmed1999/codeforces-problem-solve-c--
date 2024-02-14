#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,flg=0,cnt=0;
    cin>>x>>y;
    char a[x][y];
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
                flg=1;
            else if(a[i][j]=='W'||a[i][j]=='B'||a[i][j]=='G')
                cnt=1;
        }
    }
    if(flg==1)
        cout<<"#Color"<<endl;
    else if(cnt==1)cout<<"#Black&White"<<endl;


}
