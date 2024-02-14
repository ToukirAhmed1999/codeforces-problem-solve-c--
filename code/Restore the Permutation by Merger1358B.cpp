#include <iostream>
using namespace std;


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int array1[2*n];
        int s1 = sizeof(array1)/sizeof(array1[0]);

        for (int i=0; i < s1; i++)cin>>array1[i];

        for (int i=0; i<s1; i++)
        {
            int j;
            for (j=0; j<i; j++)
                if (array1[i] == array1[j])
                    break;
            if (i == j)
                cout << array1[i] << " ";

        }
        cout<<endl;


    }

}

