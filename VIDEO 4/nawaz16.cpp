#include<iostream>
using namespace std;

int main ()
{
    // PATTERNS

    int n, i, j, num = 1;
    cout << "Enter a number: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    cout << "After the pattern is printed , the value of num is: " << num << endl;
    return 0;

    // PATTERNS : CHARACTERS
    // int n, i, j;
    // char ch = 'A';
    // cout << "Enter a number: ";
    // cin >> n;

    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // cout << "After the pattern is printed , the value of ch is: " << ch << endl;
    // return 0;
}