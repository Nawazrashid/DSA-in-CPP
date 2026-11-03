#include<iostream>
#include<string>
using namespace std;

//Abstract Class :-

class Shape { // abstract class automatically due to present of pure vitual function.
    virtual void draw() = 0; // pure virtual function :- ye blueprint hai sbhi shapes ka jb bhi ham koi shape banaenge to class banaemge uski aur iss class ko inherit kara denge taaki usse ham draw function ka templet use kr ske.
}; // is class ki object nhi ban skti bss ye ek idea/blueprint deti hai ki kon si cheez hamare base class ke andar honi chahiye aur kon si cheez nhi honi chahiye.

class Circle : public Shape {
public:
    void draw() {
        cout << "drawing a circle" << endl;
    }
};

int main() {
    Circle c1;
    c1.draw();
    //Output :- drawing a circle
    return 0;
}