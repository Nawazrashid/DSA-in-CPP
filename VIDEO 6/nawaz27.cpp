#include<iostream>
using namespace std;

int decimalToBinary(int decNum){
    int ans = 0 , rem ; 
    int pow = 1;

    while (decNum > 0){
        rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}

int main()
{
    // BINARY NUMBER SYSTEM. : converting decimal number to binary number.

     int decNum ;
     cout << "Enter the decimal number: ";
     cin >> decNum;

     cout << "The binary form of the decimal number " << decNum << " is : " << decimalToBinary(decNum) << endl;

     return 0;
}