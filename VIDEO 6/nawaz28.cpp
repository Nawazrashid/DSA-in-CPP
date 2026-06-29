#include<iostream>
using namespace std;

int binToDec(int binNum){
    int ans = 0 , rem , pow = 1;

    while (binNum > 0){
        rem = binNum % 10;
        binNum = binNum / 10;

        ans += (rem * pow);
        pow *= 2;
    }

    return ans;
}

int main()
{
    // CONVERTING BINARY NUMBER TO DECIMAL NUMBER.

    int binNum ;
    cout << "Enter the binary number: ";
    cin >> binNum;

    cout << "The decimal form the given binary number is : " << binToDec(binNum) << endl;

    return 0;

}