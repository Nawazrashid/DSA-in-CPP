#include<iostream>
using namespace std;

int main()
{
    // LOOPS : do while loop
    int i = 1, n;
    cout << "Enter a number: ";
    cin >> n;

    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);

    // The do while loop runs at least once, even if the condition is false. In this case, it will print the value of i (which starts at 1) and then increment i by 1. The loop will continue to run until i is greater than n.
}