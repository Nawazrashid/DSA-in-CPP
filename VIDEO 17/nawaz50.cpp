#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int arr[], int n){ // O(n^2).

    for(int i = 0; i<n; i++){
        bool isSwap = false;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){  // if we change the sign > to < then the output array will be sorted in descending order.
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(isSwap == false){ // array is already sorted.
            return;
        }
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
    //SORTING TECHNIQUES :- 1. BUBBLE SORT
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;   
}