#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    // GCD OR HCF OF TWO NUMBERS :- brute force.

    // int a = 20, b = 28;

    // int gcd = 1;

    // for(int i = 1; i<min(a,b); i++) {
    //     if(a%i == 0 && b%i  == 0) {
    //         gcd = i;
    //     }
    // }

    // cout << "gcd of these two numbers is : " << gcd << endl; // output :- 4

    // return 0;

    // optimal approach.
    // euclid's algorithm :- gcd(a,b) = gcd(a%b, b) if a>b
    //                                = gcd(a, b%a) if b>a
    
    int a = 20;
    int b = 28;
    int gcd;

    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if(a == 0) {
        gcd = b;
    } else if(b == 0) {
        gcd = a;
    }

    cout << "gcd of these two numbers is : " << gcd << endl;

    return 0;

    //time complexity :- 
}