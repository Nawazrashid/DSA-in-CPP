#include<iostream>
using namespace std;

int main()
{
    // LOOPS : while loop

    int n ;
    cout << "Enter a number: ";
    cin >> n;

    int count = 1;
    while (count <= n) // if condition is (count >= 0) then it will print infinite numbers.
    {
        cout << count << " "; // " " is used to print the numbers in the same line with a space in between
        count++;
    }
    return 0;
}