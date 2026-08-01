#include<iostream>
using namespace std;

int factN(int n) { // t.c :- O(n)
    if(n == 0) {
        return 1;
    }

    return n * factN(n-1);
}

int main()
{
    // N FACTORIAL USING RECURSION :-

    cout << factN(6) << endl; // output :- 720

    return 0;
}