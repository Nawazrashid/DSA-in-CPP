#include<iostream>
#include<string>
using namespace std;

//POLYMORPHISM : Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

class Print { //Compile time Polymorphihsm (Ex:- Function Overloading):- have two show function but their parameters are different so this is an example of Function Overloading.
public:
    void show(int x) {
        cout << "int : " << x << endl;
    }

    void show(char ch) {
        cout << "char : " << ch << endl;  
    }
};

int main() {
    Print p1;
    p1.show(103);
    p1.show('n');

    return 0;

    //OUTPUT :-
    // int : 103
    // char : n

}