#include<iostream>
using namespace std;

// //  FUNCTION DEFINITION
// int printHello(){
//     cout << "Nawaz Rashid \n";
//     return 5;
// }

// int main()
// {
//     // FUNCTIONS IN C++

//     // FUNCTION CALL 
//     int val = printHello();

//     cout << "Value = " << val << endl;

//     return 0;
// }
// // OUTPUT WILL BE :
// // Nawaz Rashid 
// // Value = 5


// FUNCTOIN SYNTAX

int sum(int a, int b){  // FUNCTION THAT CALCULATE SUM OF TWO NUMBERS.
    int s = a + b;
    return s;  //  THIS FUNCTION WILL RETURN THE VALUE S.
}

int minOfTwo(int a, int b){  // HERE a and b ARE PARAMETERS BUT ACTUAL VALUES ARE GIVEN IN THE MAIN FUNCTION.

    if (a<b){
        return a;
    }

    else{
        return b;
    }

}

int main()
{
    cout << "Sum of two numbers 10 and 20 is : " << sum(10,20) << endl;

    cout << "Minimum of two numbers 10 and 6 is : " << minOfTwo(10,6) << endl;

    return 0;
}

