#include<iostream>
#include<vector>
using namespace std;

bool isArmstrong(int n) {
    int copyN = n;
    int sumOfCubes = 0;

    while(n != 0) {
        int dig = n % 10;
        sumOfCubes += (dig * dig * dig);

        n = n / 10;
    }

    return sumOfCubes == copyN;
}

int main()
{
    // CHECK WHETHER THE NUMBER IS ARMSTRONG OR NOT :- it means the number is equal to sum of cube of all the digits present int the given number.

    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(isArmstrong(n)){
        cout << "n is an armstrong number\n" ;
    } else {
        cout << "n is not an armstrong number";
    }

    return 0;
}