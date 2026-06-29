#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // MAXIMUM SUBARRAY SUM PROBLEM : brute force approach.

    // int n = 7;
    // int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    // int maxSum = INT16_MIN;

    // for(int st = 0; st<n; st++)
    // {
    //     int currSum = 0;
    //     for(int end = st; end<n; end++)
    //     {
    //         currSum += arr[end];
    //         maxSum = max(currSum , maxSum);
    //     }
    // }

    // cout << maxSum;

    // return 0;

    // same problem with most optimized approach : KADANE'S ALGORITHM
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int currSum = 0;

    int maxSum = INT16_MIN;

    for(int i = 0; i<n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "maximum subarray sum : " << maxSum ;

    return 0;
}