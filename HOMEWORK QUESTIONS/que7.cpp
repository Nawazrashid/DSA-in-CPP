#include<iostream>
using namespace std;

int main()
{
    // SUM OF ALL EVEN NUMBERS FROM 1 TO N

    int i , n , sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0) // This condition checks if the value of i is even by checking if the remainder when i is divided by 2 is equal to 0
        {
        sum = sum + i;
        }
    }
    
    cout << "Sum of even numbers from 1 to " << n << " is: " << sum << endl;
    return 0;

}    