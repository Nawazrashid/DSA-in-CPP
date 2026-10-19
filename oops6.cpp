#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    //destructor :- // main kaam hai iska ki object jo hamne banaya main memory me usko main function execute hone ke baad delete kr do memory se (deallocate kr do).
    ~Student() {
        cout << "Hi, I delete everything\n"; // jb main function khatam ho jata hai to phir destructor call hota hai isliye agar destructor me ham kuch print karaenge to wo sbse neeche output me print hoga.
        delete cgpaPtr; // hamne cgpaPtr dynamically allocate kiya tha isliye isse dynamically deallocate bhi krna hoga baaki name jo tha wo to bina likhe khud delete ho jata hai destructor ke bina bhi.
        // agar delete nahi kiya to memory leakage hota hai.
    }

    // aur agar hamne destructor nahi banaya to C++ me main function execute hone ke baad destructor khud call ho jata hai aur obejct ko memory se hata deta hai ya ham bol sakte hain ki deallocate kr deta hai.

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Nawaz Rashid", 7.95);
    s1.getInfo();

    return 0;

    //OUTPUT :-
    // Name : Nawaz Rashid
    // CGPA : 7.95
    // Hi, I delete everything
}