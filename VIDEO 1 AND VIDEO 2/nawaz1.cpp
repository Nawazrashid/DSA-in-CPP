// type casting in c++

#include <iostream>
using namespace std;

int main()
{
    char grade = 'A'; 

    int value = grade; // implicit conversion from char to int
    cout << "The ASCII value of grade " << grade << " is: " << value << endl; // output the ASCII value of grade
    
    double price = 99.99;

    int newPrice = (int)price; // explicit conversion from double to int
    cout << newPrice << endl; // output the truncated integer value of price
    return 0;
}    