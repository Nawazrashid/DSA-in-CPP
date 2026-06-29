#include<iostream>
using namespace std;

int main()
{
    // CHECK WHETHER THE GIVEN NUMBER IS POWER OF 2 OR NOT: THODA SA DIMAAG LAGANA THA.
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num <= 0){
        cout << "It is not a power of 2." << endl;
        return 0;
    }

    while (num > 1){
        if(num % 2 != 0){
            cout << "It is not a power of 2." << endl;
            return 0;
        }

        num = num/2;
    }
    
    cout << "It is a power of 2." << endl;

    return 0;

}