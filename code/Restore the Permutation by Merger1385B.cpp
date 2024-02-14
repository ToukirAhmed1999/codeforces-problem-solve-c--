#include <iostream>
using namespace std;


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[2*n];

        for (int i=0; i < 2*n; i++)
            cin>>a[i];

        for (int i=0; i<2*n; i++)
        {
            int j;
            for (j=0; j<i; j++)
                if (a[i] == a[j])
                    break;
            if (i == j)
                cout << a[i]<<endl;
        }
        return 0;
    }

}
