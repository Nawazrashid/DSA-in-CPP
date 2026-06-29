#include<iostream>
using namespace std;

int reverseArray(int arr[], int size)
{
    int start = 0, end = size-1 ;

    while(start < end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

}

int main()
{
    // REVERSE AN ARRAY

    int arr[] = {4, 2, 7, 8, 1, 3, 5};
    int size = 7;

    reverseArray(arr, size);

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}