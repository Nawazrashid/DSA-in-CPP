#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums)
        {
            ans ^= val;
        }

        return ans;    
    }

int main()
{
    // LEETCODE PROBLEM NUMBER : 136 -- SINGLE NUMBER

    vector<int> nums = {2,2,3,4,3};

    cout << "Single element present in the vector is: " ;
    cout << singleNumber(nums);

    return 0;
}