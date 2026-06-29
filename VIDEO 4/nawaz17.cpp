#include<iostream>
using namespace std;

int main()
{
    // TRIANGLE PATTERN 1
    // int n, i, j;
    // cout << "Enter a number: ";
    // cin >> n;

    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j <= i; j++) // j will run i+1 times.
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // TRIANGLE PATTERN 2
    int n, i, j;
    cout << "Enter a number: ";
    cin >> n;
    int num = 1;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i+1; j++)
        {
            cout << num << " "; // or we can write that cout << (i+1);
        }
        num++;
        cout << endl;
    }
    return 0;
}