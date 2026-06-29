#include<iostream>
using namespace std;

// int sum(int a){
//     int sum = 0;
//     for(int i=1; i<=a; i++){
//         sum = sum + i;
//     }
//     return sum;
// }

int factN(int b){ 
    int fact = 1;
    for(int i = 1; i<=b; i++){
        fact = fact * i;
    }

    return fact;
}

int main ()
{
    // calculating sum of numbers from 1 to n using function.

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;

    // cout << "Sum of numbers from 1 to n is : " << sum(n) << endl;

    // return 0;

    // calculating factorial of n numbers

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Factorial of n is : " << factN(n) << endl;

    return 0;
}

