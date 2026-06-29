#include<iostream>
using namespace std;

int main()
{
    // SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3.

    int n , i;
    cout << " Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (i = 1; i<=n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }

    cout << " The sum of all numbers from 1 to " << n << " which are divisible by 3 is: " << sum << endl;

    return 0;
}