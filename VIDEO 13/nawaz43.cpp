#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //POINTERS : these are the special variables that store address of other variables.

    int a = 10;
    cout << &a << endl; // it will give address of a.

    int *ptr = &a; //it is type of integer pointer : ptr store the address of variable a.`
    cout << ptr << endl; // it will give the same value as of address of a because it contains address of a.

    float price = 100.56;
    float *fptr = &price;

    cout << fptr << endl; // it will give the value store in the float pointer fptr.
    cout << &price << endl; // it will give address of price variable which is same as that of fptr.

    // POINTER TO POINTER

    int **ptr2 = &ptr;
    cout << ptr2 << endl; // it will contain the address of ptr which contain address of a so that's why it is known as pointer to pointer.

    // DEFERENCE OPERATORS : * --> IT GIVE THE VALUE AT ADDRESS

    cout << *(&a) << endl; // it will give the value stored at address of a which is 10.
    cout << *(ptr) << endl; // it will also give value 10.
    cout << *(ptr2) << endl; // it will give the value stored at address ptr2 which is value of ptr or we can say that address of a.
    cout << *(*(ptr2)) << endl; // it is double dereferencing which will give the value of a that is 10.

    // NULL POINTERS

    int *ptr3 = NULL;
    cout << ptr3 << endl; // it will give value of ptr which we have assigned to 0.
    // we cannot dereference the NULL pointer if we try to deference it will give the segmentation fault.
    cout << *ptr3 << endl; // segmentation fault - it will print nothing.

}