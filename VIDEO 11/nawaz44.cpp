#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int freq = 0 , ans = 0;
    int n = nums.size();

    for(int i = 0; i<n ; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++ ; 
        }
        else{
            freq-- ;
        }
    }

    return ans;
}

int main()
{
    // MAJORITY ELEMENT :- MOORE'S ALGORITHM

    vector<int> nums = {1,2,2,1,1};

    cout << "Majority element in the given vector is: " << majorityElement(nums) << endl;

    return 0;
}