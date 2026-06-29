#include<iostream>
using namespace std;

int main ()
{
    // LOOPS : for loop

    int n, i ;
    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i = i+2) // i = i + 2 is used to print only odd numbers
    {
        cout << i << " "; // " " is used to print the numbers in the same line with a space in between
    }

    return 0;
}