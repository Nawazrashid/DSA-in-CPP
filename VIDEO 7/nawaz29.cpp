#include<iostream>
using namespace std;

int main ()
{
    // BITWISE OPERATORS:

    int a=6 , b=10;

    cout << (a&b) << endl; // bitwise and operator.
    cout << (a|b) << endl; // bitwise or operator.
    cout << (a^b) << endl; // bitwise xor operator.
    cout << (b<<2) << endl; // bitwise left shift operator. if (a<<b) then  a = a * 2^b.
    cout << (b>>1) << endl; // bitwise right shift operator. if (a>>b) then a = a / 2^b.
    return 0;

    //  OPERATORS                        PRECEDENCE 
    // 1. !, +, - (Unary operators) ---->  R to L
    // 2. *, /, %                   ---->  L to R 
    // 3. +, - (Binary operators)   ---->  L to R 
    //   bitwise operators
    // 4. <, <=, >, >=              ---->  L to R 
    // 5. ==, !=                    ---->  L to R 
    // 6. &&                        ---->  L to R 
    // 7. ||                        ---->  L to R 
    // 8. = (assignment operator)   ---->  R to L 
    
}