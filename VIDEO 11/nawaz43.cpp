#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();

    for(int val : nums)
    {
        int freq = 0;
        for(int el : nums)
        {
            if(val == el){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
}
int main()
{
    // LEETCODE PROBLEM :- MAJORITY ELEMENT :- brute force approach.

    vector<int> nums ={1,2,2,1,1};

    cout << "Majority element in the given vector is: " << majorityElement(nums) << endl;

    return 0;
}