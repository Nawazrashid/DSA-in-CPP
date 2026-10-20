#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) { // parameterised constructor
        this->name = name;
        this->age = age;
        cout << "hi i am called first, parent constructor." << endl;
    }

    Person() {
        cout << "hi i am called first, parent constructor." << endl; // ye sbse pehle print hoga bhale hamne student class ko hi call kiya hai bss pr base class wala constructor pehle call hota hai aur ise print kra ke ham prove bhi kr diye ki ye sbse pehle print hoga.
    }    

    ~Person() {
        cout << "hi i am called second , i am parent destructor called after the derived destructor." << endl;
    }
};

class Student : public Person { // yaha par student class person class ki property ko inherit kr rha hai hamne student class me name aur age define bhi nhi ki phir bhi agar main function me ham initialize krenge s1 ke liye name aur age ko aur getInfo ko call krenge to hamara sb kuch print ho jaega.
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){ // agar hamara parent constructor parameterised hoga to hame ye likhna hoga taaki student waale constructor ke call hone se pehle person wala constructor call ho jae.
        this->rollno = rollno;
        cout << "hi i am second, child or derived constructor." << endl;
    }

    ~Student() {
        cout << "i am called first, i am derived destructor." << endl;
    }

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Rollno : " << rollno << endl;
    }
};

int main() {
    Student s1("Nawaz", 23, 3121); // yaha hamne jb student s1 banaya to sbse pehle person class (jo ki base constructor hai) wo call hoga then uske baad student class (derived class) wala constructor call hoga.
    // s1.name = "Nawaz";
    // s1.age = 23;
    // s1.rollno = 3121;
    
    s1.getInfo();
    return 0;

// OUTPUT :-
// hi i am called first, parent constructor.
// hi i am second, child or derived constructor.
// Name : Nawaz
// Age : 23
// Rollno : 3121
// i am called first, i am derived destructor.
// hi i am called second , i am parent destructor called after the derived destructor.    
}