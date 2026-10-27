#include<iostream>
#include<string>
using namespace std;

// Multilevel Inheritance :-

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class GradStudent : public Student {
public:
    string researchArea;
};
 
int main() {
    GradStudent s1;
    s1.name = "Nawaz";
    s1.age = 23;
    s1.researchArea = "Computer Science";

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.researchArea << endl;

    return 0;
   
//OUTPUT :- yaha hamne GradStudent me name aur age define bhi nhi kiya tha fir bhi hamne use initialize kiya aur print kiya to ho gya kyo ki yaha pr multilevel inheritance use ho rha hai. 
// Nawaz
// 23
// Computer Science    
}
