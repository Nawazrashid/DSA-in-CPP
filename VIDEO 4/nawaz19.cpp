#include<iostream>
using namespace std;

int main()
{
    // FLOYD'S TRIANGLE PATTERN

    int n = 4, i, j;
    int num = 1;

    for(i=0; i<n ; i++)
    {
        for(j=0; j<i+1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;

    // FLOYD'S TRIANGLE PATTERN FOR CHARACTERS
    // int n = 4, i, j;
    // char ch = 'A';

    // for(i=0; i<n; i++)
    // {
    //     for(j=i+1; j>0; j--)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // return 0;
}