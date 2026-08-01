#include<iostream>
using namespace std;

int sumN(int n) {
    if(n == 1) {
        return 1;
    }

    return n + sumN(n-1);
}

int main()
{
    // SUM OF N NUMBERS USING RECURSION :-

    cout << sumN(10) << endl; //output:- 55

    return 0;
}