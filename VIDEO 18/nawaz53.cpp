#include<iostream>
#include<vector>
using namespace std;

 void sortColors(vector<int>& nums, int n) {
        int count0 = 0, count1 = 0, count2 = 0;

        for(int i = 0; i<n; i++){ //O(n)
            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else count2++;
        }

        int index = 0;
        for(int i = 0; i<count0; i++){
            nums[index] = 0;
            index++;
        }
        for(int i = 0; i<count1; i++){
            nums[index] = 1;
            index++;
        }
        for(int i = 0; i<count2; i++){
            nums[index] = 2;
            index++;
        }
    }

int main()
{
    //SORT ARRAYS WITH 0'S, 1'S, 2'S. :- optimized approach with time complexity of O(n) but in this algorithm we have passed 2 times on our given array.
    // Leetcode problem :- 75, T.C = O(n)

    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    int n = nums.size();

    sortColors(nums, n);

    for(int i = 0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}