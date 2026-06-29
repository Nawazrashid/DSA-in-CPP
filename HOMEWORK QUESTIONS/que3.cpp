#include<iostream>
using namespace std;

int main()
{
    // ELIGIBILITY CHECK FOR VOTING
    int age;
    cout << "Enter you age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to vote. " << endl;
    }
    else
    {
        cout << "You are not eligible to vote. " << endl;
    }

    return 0;
}