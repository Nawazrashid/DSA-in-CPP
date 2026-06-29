#include<iostream>
using namespace std;

int main()
{
    // UNARY OPERATORS

    int a = 10;
    int b = a++; // post-increment: b gets the value of a (10), then a is incremented to 11
    cout << "Value of a after post-increment: " << a << endl; // outputs 11
    cout << "Value of b after post-increment: " << b << endl; // outputs 10

    int c = 20;
    int d = ++c; // pre-increment: c is incremented to 21, then d gets the value of c (21)
    cout << "Value of c after pre-increment: " << c << endl; // outputs 21
    cout << "Value of d after pre-increment: " << d << endl; // outputs 21

    int e = 30;
    int f = e--; // post-decrement: f gets the value of e (30), then e is decremented to 29
    cout << "Value of e after post-decrement: " << e << endl; // outputs 29
    cout << "Value of f after post-decrement: " << f << endl; // outputs 30

    int g = 40;
    int h = --g; // pre-decrement: g is decremented to 39, then h gets the value of g (39)
    cout << "Value of g after pre-decrement: " << g << endl; // outputs 39
    cout << "Value of h after pre-decrement: " << h << endl; // outputs 39

    return 0;
}