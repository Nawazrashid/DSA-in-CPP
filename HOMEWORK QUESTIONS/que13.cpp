#include<iostream>
using namespace std;

int BinomialCoeff(int n, int r){
    int factN = 1;
    int factR = 1; 
    int factX = 1;

    for(int i=1; i<=n; i++){
        factN = factN * i;
    }

    for(int j=1; j<=r; j++){
        factR = factR * j;
    }

    for(int k=1; k<=(n-r); k++){
        factX = factX * k;
    }

    return factN / ((factR) * (factX));
}

int main()
{
    // CALCULATE BINOMIAL COEFFICIENT nCr. : APNE SE CODE LIKHA HAI POORA.

    int n; int r;
    cout << "Enter the value of n : ";
    cin >> n ;

    cout << "Enter the value of r : ";
    cin >> r ;
    
    cout << "The value of binomial coefficient nCr is : " << BinomialCoeff(n,r) << endl;

}