#include<iostream>
using namespace std;

int main()
{
    // WHETHER A NUMBER IS EVEN OR ODD
    int num;
    cout << "Enter a numer: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even. " << endl;
    }
    else
    {
        cout << num << " is odd. " << endl;
    }
    return 0;
}