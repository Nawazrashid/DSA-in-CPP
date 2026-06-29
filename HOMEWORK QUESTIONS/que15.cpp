#include<iostream>
using namespace std;

int fibOfN(int n){

    int fib ;

    if(n == 0){
        fib = 0;  
    }

    else if(n == 1){
        fib = 1;
    }

    else {
        fib = fibOfN(n-2) + fibOfN(n-1);   
    }

    return fib;
}

int main()
{
    //  WAP FOR FIBONACCI SERIES. : APNE SE KIYA HAI.

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << n << "th no. in fibonacci seies is : " << fibOfN(n) << endl;
}