#include<iostream>
using namespace std;

int sumN(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i<size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int proN(int arr[], int size)
{
    int pro = 1;
    for(int i = 0; i<size; i++)
    {
        pro = pro * arr[i];
    }
    return pro;
}


int main()
{
    // CALCULATE THE SUM AND PRODUCT OF ALL THE NUMBERS PRESENT IN THE GIVEN ARRAY.

        int arr[] = {1, 2, 3, 4, 5};
        int size = 5;

        cout << "Sum of all the numbers in the given array is : " << sumN(arr , size) << endl;
        cout << "Product of all the numbers in the given array is : " << proN(arr , size) << endl;

        return 0;
}