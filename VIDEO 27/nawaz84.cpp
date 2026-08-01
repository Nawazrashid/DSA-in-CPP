#include<iostream>
using namespace std;

void printNum(int n) {
    if(n == 1) {
        cout << "1\n" ;
        return;
    }

    cout << n << " ";
    printNum(n - 1); 
}

int main() 
{
    // RECURSION :-
    // PRINT NUMBERS FROM N TO 1 using recursion.
    int n = 10;

    printNum(n);

    return 0;

    // output :- 10 9 8 7 6 5 4 3 2 1
}