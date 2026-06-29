#include<iostream>
using namespace std;

int main()
{
    // ARRAYS : FIRST DATA STRUCTURE
    // int marks[5] = {99, 100, 54, 36, 88};

    // marks[0] = 78; // we can change the value of the elements like this.

    // double price[] = {98.99, 105.67, 30.00};

    // cout << marks[0] << endl; // will print the first element of array becaause array indexing start from 0.

    // cout << price[2] << endl; // will print the third element of array price[].

    
    // int size = sizeof(marks)/ sizeof(int);

    // cout << size << endl;

    // LOOPS ON ARRAY:
    int size = 5;
    int marks[size];
     
    for (int i=0; i<size; i++){
        cin >> marks[i] ;
    }
    for (int i=0; i<size; i++){
        cout << marks[i] << endl;
    }

    return 0;

}