#include<iostream>
#include<vector>
using namespace std;

int recbinarySearch(vector<int> arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end-st)/2 ;

        if(tar > arr[mid]){
            return recbinarySearch(arr, tar, mid+1, end);
        }
        else if(tar < arr[mid]){
            return recbinarySearch(arr, tar, st, mid-1);
        }
        else{
            return mid;
        }
    }

    return -1;
}

int main()
{
    // BINARY SEARCH USING RECURSION 

    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd number of elements.
    int tar1 = 4;

    cout << recbinarySearch(arr1, tar1, 0, arr1.size()-1) << endl;

    vector<int> arr2 = {-2, 0, 4, 5, 9, 12}; // even number of elements.
    int tar2 = 9;

    cout << recbinarySearch(arr2, tar2, 0, arr2.size()-1) << endl;

    return 0;

    // TIME COMPLEXITY :- O(logn)
    // SPACE COMPLEXITY :- O(logn) ---> due to present of recursion stack.
}