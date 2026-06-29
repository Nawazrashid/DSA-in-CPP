#include<iostream>
using namespace std;

int revNum(int num){

    int rev = 0 , rem ; 

    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }

    return rev ;

}

int main()
{
    // REVERSE THE GIVEN INTEGER. : ye apne se kiya.

    // int num;
    // cout << "Enter the number: ";
    // cin >> num;

    // int rem;
    // while(num > 0){
    //     rem = num % 10;
    //     cout << rem;
    //     num = num / 10;
    // }

    // return 0;

    // REVERSE THE GIVEN INTEGER AND STORE IT IN A VARIABLE.

    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Reverse of the given number is : " << revNum(num) << endl;

    return 0;
}