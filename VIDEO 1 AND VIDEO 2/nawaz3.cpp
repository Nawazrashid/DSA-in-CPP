#include<iostream>
using namespace std;

int main()
{
//    ARITHMETIC OPERATORS IN C++
    int a = 10 , b = 6;

    cout << "sum = " << (a + b) << endl; // output the sum of a and b
    cout << "difference = " << (a - b) << endl; // output the difference of a and b
    cout << "product = " << (a * b) << endl; // output the product of a and b
    cout << "quotient = " << (a / b) << endl; // output the quotient of a and b
    cout << "remainder = " << (a % b) << endl; // output the remainder of a divided by b

    cout << (5/2) << endl; // output the result of integer division (truncated to 2)
        cout << (5.0/2) << endl; // output the result of floating-point division (2.5)
        cout << (a / double(b)) << endl; // typecasting is done, b is directly converted to double output the result of floating-point division (1.66667)
        cout << (5/2.0) << endl; // output the result of floating-point division (2.5)
        cout << (5.0/2.0) << endl; // output the result of floating-point division (2.5)
    return 0;
}