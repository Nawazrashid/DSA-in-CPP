#include<iostream>
using namespace std;

int changeArr(int arr[], int size)
{
    cout << "in function\n";

    for(int i=0; i<size; i++)
    {
        arr[i] = 2* arr[i];
    }
}

int main()
{
    // PASS BY REFERENCE.

    int arr[] = {1, 2, 3};

    changeArr(arr, 3);

    cout << "in main\n";

    for(int i=0; i<3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // output = 2 4 6  // ye hua kyoki arr ka name ek pointer hota hai mtlb changeArr me arr ka address gya tha isliye function me sabhi element 2 se multiply hokar change ho gye aur ham jb wapas aaye main function tb bhi wo change dikhega kyoki call by reference tha main array ke address pe ja kr uski value change ki gyi thi.

    return 0;
}