#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){ // iterative code for binary search
    int st = 0, end = arr.size() - 1;

    while(st <= end){
        int mid = (st + end)/2 ; // mid = [ st + (end-st)/2 ]  hame coding platforms pr yahi krna hai mid ki valur nikalne ke liye taaki overflow na ho.
        if(tar > arr[mid]){
            st = mid+1;
        }
        else if(tar < arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    
    return -1;
}

int main()
{
    // BINARY SEARCH 
      vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd number of elements.
      int tar1 = 12;

      cout << binarySearch(arr1, tar1) << endl;

      vector<int> arr2 = {-2, 0, 4, 5, 9, 12}; // even number of elements.
      int tar2 = 0;

      cout << binarySearch(arr2, tar2) << endl;

      return 0;

      // TIME COMPLEXITY :- O(logn)
      // SPACE COMPLEXITY :- O(1)
}