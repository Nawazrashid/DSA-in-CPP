#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int digitSum = 0;
    while(n>0){
        int x = n%10; // here x is the last digit of the given number.
        digitSum += x;
        n = n/10;
    }
    return digitSum;
}

int main ()
{
    // calculate sum of digits of a number.

    int n;
    cout << "Enter the value of n: " ;
    cin >> n;

    cout << "Sum of the digit of the given number is : " << sumOfDigits(n) << endl;

    return 0;
}