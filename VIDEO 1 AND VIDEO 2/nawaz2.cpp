#include <iostream>
using namespace std;

int main ()
{
    int age ;
    //cout << age << endl; // output the value of age (uninitialized variable, may contain garbage value) 

    cout << "Enter your age: ";
    cin >> age; // input the value of age from the user

    cout << "Your age is: " << age << endl; // output the value of age
    
    double price ;
    cout << "Enter the price: ";
    cin >> price ; // input the value of price from the user

    cout << "The price is: " << price << endl; // output the value of price
    return 0;
}