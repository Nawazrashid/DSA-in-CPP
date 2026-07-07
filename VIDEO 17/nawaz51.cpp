#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int arr[], int n){ // O(n^2).
    for(int i = 0; i<n; i++){
        int smallestIndex = i; // first element of unsorted array.
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[smallestIndex]){ // if we change the sign > to < then the output array will be sorted in descending order.
                smallestIndex = j;
            }
        }

        swap(arr[i], arr[smallestIndex]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    //SORTING ALGORITHM :- 2. SELECTION SORT
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}