#include<iostream>
using namespace std;

int main ()
{
    //CONDITIONAL STATEMENT : ternary statement
    int n ;
    cout << " Enter a number: ";
    cin >> n;

    (n >= 0) ? cout << "The number is positive" : cout << "The number is negative";

    return 0;
}