#include<iostream>
using namespace std;

int main ()
{
    // NESTED LOOPS 

    int n = 5;
    int x = 5;
    for (int i = 1; i <= n; i++) // outer loop = no. of lines
    {
        for (int j = 1; j <= x; j++)
        cout << "*" << " ";
        cout << endl;
    }
    return 0;
}