#include<iostream>
#include<string>
using namespace std;

//Deep copy :-

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj) {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl; 
    }
};

int main() {
    Student s1("Nawaz", 7.95);
    s1.getInfo(); // s1 :- cgpa = 7.95

    Student s2(s1);
    *(s2.cgpaPtr) = 9.2;
    s2.name = "Rahul";
    s2.getInfo(); // s2 :- cgpa = 9.2
    s1.getInfo(); // s1 :- cgpa = 7.95 // same as that of before.

    return 0;

    //OUTPUT :- 
    // Name : Nawaz
    // CGPA : 7.95
    // Name : Rahul
    // CGPA : 9.2
    // Name : Nawaz
    // CGPA : 7.95
}