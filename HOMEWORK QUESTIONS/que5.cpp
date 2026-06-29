#include<iostream>
using namespace std;

int main()
{
    // SUM OF NUMBER FROM 1 TO N
    int i , n , sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i; // sum = sum + i is used to add the value of i to the sum variable in each iteration of the loop
    }

    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
    return 0;

    // same program using while loop
    /*
    int i , n , sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
    */
}