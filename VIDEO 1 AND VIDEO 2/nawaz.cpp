// variables in c++ and primitive data types in c++

#include<iostream>
using namespace std;

int main()
{

    cout << "My name is Nawaz Rashid" << endl;

   int age = 23; // variable declaration and initialization
    cout << "My age is: " << age << endl; // output the value of age
    cout << sizeof(age) << endl; // output the size of the variable age in bytes

   char grade = 'A'; // variable declaration and initialization 
    cout << "My grade is: " << grade << endl; // output the value of grade
    cout << sizeof(grade) << endl; // output the size of the variable grade in bytes

   float PI = 3.14f;
    cout << sizeof(PI) << endl; // output the size of the variable PI in bytes  

   bool isSafe = false;
    cout << isSafe << endl; // output the value of isSafe (0 for false, 1 for true) 

   double price = 99.99; 
    cout << price << endl; // output the value of price
    cout << sizeof(price) << endl; // output the size of the variable price in bytes

    return 0;
}

