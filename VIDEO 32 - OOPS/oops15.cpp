#include<iostream>
#include<string>
using namespace std;

//Static Keyword :-

void func() {
    static int x = 0; // static variable.
    cout << "x : " << x << endl;
    x++;
}

class A {
public:
    int x;
 
    void incx() {
        x = x + 1;
    }
};

int main() {
    func();
    func();
    func();
    // output :-
    //x : 0
    //x : 1
    //x : 2

    A a1;
    a1.x = 100;
    cout << a1.x << endl;
    a1.incx();
    cout << a1.x << endl;

    // output :-
    //0
    //1 
    return 0;
}