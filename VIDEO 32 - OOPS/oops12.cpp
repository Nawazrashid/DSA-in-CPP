#include<iostream>
#include<string>
using namespace std;

//Run Time Polymorphism :-
// --FUNCTION OVERRIDDING--
class Parent {
public:
    void getInfo() {
        cout << "Parent class \n";
    }
};

class Child : public Parent {
public:
    void getInfo() {
        cout << "Child class \n";
    }
};


int main() {
    Child c1;
    c1.getInfo();
    //Output :- Child class // yaha par child class parent class ko override kr rha hai
    Parent p1;
    p1.getInfo();
    //Output :- Parent class 

    return 0;
}