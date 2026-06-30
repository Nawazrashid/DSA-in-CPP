#include<iostream>
using namespace std;

int main()
{
    // ARRAY POINTERS

    int arr[] = {1, 2, 3, 4, 5};

    cout << arr << endl; // pointer so it will print address.
    cout << *arr << endl; // value present at 0th index will be printed that is 1.

    cout << *(arr + 2) << endl; // it will points to index number 2 which will give value 3.

    // arr pointer is the constant pointer throughout the program and cannot be changed.

    // POINTER ARITHMETIC
    
    int a = 10;
    int *ptr = &a;

    cout << ptr << endl; 
    ptr++;
    cout << ptr << endl; // +4
    ptr--;
    ptr--;
    cout << ptr << endl; // -4 from orignal value of ptr.

    ptr = ptr + 2 ; // it means we are adding 2 integer value soo it will be added by 8B.
    cout << ptr << endl;

    // we cannot add two pointers in c++ but we can subtract two pointers of same type.
    int ptr1 = 100;
    int ptr2 = 108;

    int ptr3 = ptr2 - ptr1; // it will give value 8 it means there are 8B of memory present in between them.

    cout << ptr3 << endl;

    // all types of relational operator can be applied on pointers.

    return 0;
}