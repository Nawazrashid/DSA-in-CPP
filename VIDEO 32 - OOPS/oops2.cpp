#include<iostream>
#include<string>
using namespace std;

class Teacher {
private: 
    double salary;
public:    
    Teacher() { // constructor :- non parameterized constructor.
        cout << "Hi, I am Nawaz Rashid\n";
        dept = "Computer Science";
    }

    //Teacher(string n, string d, string s, double sal) { // parameterized constructor.
        // name = n;
        // dept = d;
        // subject = s;
        // salary = sal;
    //}

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

    // void getinfo() {
    //     cout << "name :" << name << endl;
    //     cout << "subject :" << subject << endl;
    // }
};

int main() {
    Teacher t1; // constructor call // jaise hi hamne ye likha to sbse pehle teacher class me Teacher naam ka function call ho jaega aur jo bhi usme likha hoga wo execute ho jaega uske baad neeche ke statements run honge.
    t1.name = "Nawaz";
    t1.subject = "C++";

    // Teacher t2("Nawaz", "cs", "algo", 25000); // is used for parameterized constructor in which we send all the parameters during intitialization of object.
    // t2.getinfo();

    cout << t1.name << endl;
    cout << t1.dept << endl;
    return 0;

    // Output :- 
    // Hi, I am Nawaz Rashid  // ye jb t1 call hua to wo class me gya usme Teacher naam ke function ko execute kiya uske baad fir baaki statements run hongi.
    // Nawaz   
    // Computer Science    // hamne main function me dept ko initialize nahi kiya and usko Teacher function me likha jiska matlb jaise hi koi obejct banegi to uss object ka dept hamesha computer science hi rhega taaki hame baar baar change na krna pde sb object ke liye, ye tb use hota hai jb koi object ki aisi property ho jo sbhi object ke liye same ho taaki hame baar baar usko initialize na krna pade.
}