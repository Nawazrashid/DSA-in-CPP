#include<iostream>
#include<string>
using namespace std;

class Teacher {
private: 
    double salary;
public:    
    //Properties OR Attributes :-
    string name;
    string dept;
    string subject;

    //Methods OR Member Functions :-
    void changeDept(string newDept) {
        dept = newDept;
    }

    void setSalary(int s) {
        salary = s;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;
    t1.name = "Nawaz";
    t1.subject = "C++";
    t1.dept = "CSE";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    return 0;
}