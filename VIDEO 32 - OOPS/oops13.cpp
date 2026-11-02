#include<iostream>
#include<string>
using namespace std;

//Run Time Polymorphism :-
// Virtual functions :- A virtual function is a member function thatnyou expect to be redefined in derived class.

class Parent {
public:
    void getInfo() {
        cout << "Parent class \n";
    }

    virtual void hello() {
        cout << "hello from parent\n";
    }
};

class Child : public Parent {
public: 
    void getInfo() {
        cout << "Child class\n";
    }

    void hello() {
        cout << "hello from child\n";
    }
};

int main() {
    Child c1;
    c1.hello();
    // output :-
    //hello form child

    return 0;
}