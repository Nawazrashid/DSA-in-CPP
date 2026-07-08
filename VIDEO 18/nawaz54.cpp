#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums, int n) {
        // Dutch national flag algorithm : in single pass this loop runs.
        int low = 0, mid = 0, high = n-1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }

int main()
{
    //Leetcode problem :- 75. with most optimal solution which contain passing 1 time on our given array. T.C = O(n).
    // Dutch national flag algorithm : in single pass this loop runs.

    vector<int> nums = {2,0,1,2,0,0,2,1,1,2};

    int n = nums.size();

    sortColors(nums, n);

    for(int i = 0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}