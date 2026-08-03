#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int> &arr, int target, int st, int end) {
    if(st <= end) {
        int mid = st + (end - st)/2;
        if(arr[mid] == target) {
            return mid;
        }

        else if(arr[mid] < target) {
            return binSearch(arr, target, mid+1, end);
        }

        else {
            return binSearch(arr, target, st, mid-1);
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 5, 8, 9, 10};
    int target = 9, st = 0, end = arr.size()-1;

    cout << binSearch(arr, target, st, end) << endl; // output :- 3 because target value has the index 3 in the vector.
}