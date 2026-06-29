#include<iostream>
#include<vector>
using namespace std;

int main()
{ 
    // LEETCODE PROBLELM 238 :-- PRODUCT OF ARRAY EXCEPT ITSELF. :-- OPTIMAL APPROACH (time complexity is O(n) but space complexity is also O(n) so we need to make more optimal solution.)
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans(n);
    vector<int> preffix(n);
    vector<int> suffix(n);

    //preffix
    preffix[0] = 1;
    for(int i = 1; i<n; i++){
        preffix[i] = preffix[i-1] * nums[i-1];
    }

    //suffix
    suffix[n-1] = 1;
    for(int j = n-2; j>=0; j--){
        suffix[j] = suffix[j+1] * nums[j+1];
    } 

    //ans
    for(int k = 0; k<n; k++){
        ans[k] = preffix[k] * suffix[k];
        cout << ans[k] << " ";
    }

    cout << endl;

    return 0;
}