#include<iostream>
#include<vector>
using namespace std;

int gcdOf(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if(a == 0) return b;
    else if(b == 0) return a;
}

int lcmOf(int a, int b) {
    int gcd = gcdOf(a, b);
    return (a * b)/gcd;
}

int main()
{
    // LCM OF TWO NUMBERS

    int a = 20; 
    int b = 25; 

    cout << "lcm of a and b is : " << lcmOf(a, b) << endl; // output :- 100

    return 0;
}