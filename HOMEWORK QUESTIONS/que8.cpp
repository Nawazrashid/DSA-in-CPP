#include<iostream>
using namespace std;

int main()
{
    // CHECKING WHETHER THE NUMBER IS PRIME OR NOT

    int n , i;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    for ( i = 2 ; i*i <= n ; i++) // this statement means that the loop will run from 2 to sqrt(n), which are the possible factors of n. Loop runs upto sqrt(n) because if n is divisible by any number greater than its square root, it must have a corresponding factor that is less than the square root.
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number." << endl;
            return 0;
        }
        else
        {
            continue;
        }
    }

    cout << n << " is a prime number." << endl;
    return 0;

}