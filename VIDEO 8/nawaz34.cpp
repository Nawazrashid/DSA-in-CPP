#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1;  // if the target value is not present in the array then this function will return -1 means invalid index.
}

int main()
{
    // LINEAR SEARCH .

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 5;

    cout << "Our target value is at the index: " << linearSearch(arr, size, target) << endl;

    return 0; 

    // TIME COMPLEXITY OF LINEAR SEARCH IS O(n).
}