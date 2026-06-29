#include<iostream>
using namespace std;

int main ()
{
    // FACTORIAL OF A NUMBER

    int i, n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0 || n == 1)
    { 
        cout << "Factorial of " << n << " is 1. " << endl;
    }

    else if (n < 0)
    {
        cout << "Factorial of negative number is not defined. " << endl;
    }

    else
    {
        for (i = 2; i<=n; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << n << " is " << fact << " . " << endl;
    }
    return 0;
}