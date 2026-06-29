#include<iostream>
using namespace std;

int main()
{
    // INVERTED TRIANGLE PATTERN
    // int n=4, i, j;

    // for(i=0; i<n; i++)
    // {
    //     for(j=0; j<i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for(j=0; j<n-i; j++)
    //     {
    //         cout << (i+1);
    //     }
    //     cout << endl; 
    // }
    // return 0;

    // INVERTED TRIANGLE PATTERN FOR CHARACTERS

    int n=4, i, j;
    char ch = 'A';
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            cout << " ";
        }

        for(j=0; j<n-i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl; 
    }
    return 0;
}