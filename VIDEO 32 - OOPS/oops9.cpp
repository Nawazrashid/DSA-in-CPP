#include<iostream>
#include<string>
using namespace std;

// Multiple Inheritance :-

class Student {
public:
    string name;
    int rollno;
};

class Teacher {
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {
public:
    
};

int main() {
    TA  t1;
    t1.name = "Nawaz";
    t1.rollno = 326103121;
    t1.subject = "CS";
    t1.salary = 12400;

    cout << t1.name << endl;
    cout << t1.rollno << endl;
    cout << t1.subject << endl;
    cout << t1.salary << endl;

    return 0;

    //OUTPUT :- yaha pr TA class banayi aur usme student aur teacher dono ki property ko inherit kara diya aur TA ko khali chodh diya pr agar ham TA ko initialize krke usme name aur rollno subject salary dal kr print karaenge to ho jaega kyoki usne property ko inherit kr liya hai isko kehte hain multiple inheritance.

    // Nawaz
    // 326103121
    // CS
    // 12400
}