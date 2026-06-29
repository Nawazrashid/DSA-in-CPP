#include<iostream>
using namespace std;

int main()
{
    // BUTTERFLY PATTERN
    // BHAI POORA APNE SE DIMAAG LAGA KR CODE LIKHA HUN.
    int n = 5, i, j;

    // TOP 

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout << "*";
        }

        for(j=0; j<(n-i-1)*2; j++)
        {
            cout << " ";
        }

        for(j=0; j<=i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //BOTTOM

    for(i=0; i<n; i++)
    {
        for(j=n-i; j>0; j--)
        {
            cout << "*";
        }

        for(j=0; j<2*i; j++)
        {
            cout << " ";
        }

        for(j=n-i; j>0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}