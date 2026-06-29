#include<iostream>
using namespace std;

int main()
{
    // PATERNS : SQUARE PATTERN
    // int n ;
    // cout << "Enter the value of n: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // PATERNS : CHARACTER SQUARE PATTERN
    int n; 
    cout << "Enter the value of n: ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        char ch = 'A' ;
        for(int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++; // ASCII value of A is 65, B is 66 and so on. So, by incrementing the character variable 'ch', we can print the next character in the sequence.
        }
        cout << endl;
    }
    return 0;
}