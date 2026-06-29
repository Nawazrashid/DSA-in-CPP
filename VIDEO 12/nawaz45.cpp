#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // LEETCODE PROBLELM 238 :-- PRODUCT OF ARRAY EXCEPT ITSELF. :- brute force approach

    vector<int> nums = {1,2,3,4};
    int n = nums.size();

    vector<int> ans(n);

    for(int i = 0; i<n; i++){
        int prod = 1;
        for(int j = 0; j<n; j++){
            if(i != j){
                prod *= nums[j];
            }
        }

        ans[i] = prod;
    }
    
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";  // output :- 24 12 8 6.
    }

    return 0;
}