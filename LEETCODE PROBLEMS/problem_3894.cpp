#include<iostream>
#include<string>
using namespace std;

int main()
{
    // LEETCODE PROBLEM :- 3894 (VERY EASY).
    int timer;

    cout << "Enter the timer : ";
    cin >> timer;

    if(timer == 0) cout << "Green";
    else if(timer == 30) cout << "Orange";
    else if(timer > 30 && timer <= 90) cout << "Red";
    else cout << "Invalid";

    return 0;
}