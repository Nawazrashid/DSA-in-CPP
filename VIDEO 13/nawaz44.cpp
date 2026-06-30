#include<iostream>
using namespace std;

void changeA(int *ptr){ // pass by reference.
    *ptr = 20;
}

void changeB(int b){ // pass by value.
    b = 50;
}

void changeC(int &d){ // pass by reference using alias.
    d = 100;
}

int main()
{
    // PASS BY VALUE AND PASS BY REFERENCE

    int a = 10;
    int *ptr = &a;

    changeA(ptr); // pass by reference.
    cout << a << endl; // output will be changed due to changeA function and a = 20.

    int b = 30;
    
    changeB(b);
    cout << b << endl; // output will be same as 30 because changeB is a pass by value function and will not change the value of b in the main function.

    //PASS BY REFERENCE USING ALIAS

    int c = 50;

    changeC(c); // pass by reference using alias.
    cout << c << endl; // it will print 100 because due to pass by reference using alias change the value of c from 50 to 100.
}