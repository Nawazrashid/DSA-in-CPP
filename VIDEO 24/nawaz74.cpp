#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
        vector<bool> isPrime(n+1, true);
        int count = 0;

        for(int i = 2; i<n; i++) {
            if(isPrime[i]) {
                count++;

                for(int j = i*2; j<n; j=j+i) {
                    isPrime[j] = false;
                } 
            }
        }

    return count;
}

int main()
{
    // sieve of eratosthenes :- count prime number in a range of 1 to N.
    // leetcode problem :- 204 (count primes)

    int n;

    cout << "Enter a number : " ;
    cin >> n;

    cout << "No. of prime numbers between 1 and n is : " << countPrimes(n) << endl;

    return 0;
}