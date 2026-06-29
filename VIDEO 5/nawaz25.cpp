#include<iostream>
using namespace std;

int sum(int a, int b){
    a = a + 10; // 15
    b = b + 10; // 14

    return a + b; // 29
} 

void changeX(int x){
    x = 2*x;
    cout << "x = " << x << endl; // it will print x = 10.
}

int main()
{
    // this is an example of pass by value in which the integer in main function does not change their value after the execution of the program.
    // int a = 5, b = 4;

    // cout << "Sum = " << sum(a,b) << endl; // 29

    // cout << "a = " << a << endl; // but a remain 5.
    // cout << "b = " << b << endl; // but b remain 4.

    // return 0;

    // another example of pass by value.

    int x = 5;
    changeX(x);

    cout << "x = " << x << endl; // value of x will remain 5 because function changeX() was call by value function so it will not affect the value of x in main function. 

    return 0;
}