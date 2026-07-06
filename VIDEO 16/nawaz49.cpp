#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDistance){ //O(n)
    int cows = 1, lastStallPos = arr[0];

    for(int i = 0; i<N; i++){
        if(arr[i] - lastStallPos >= minAllowedDistance){
            cows++;
            lastStallPos = arr[i];
        }

        if(cows == C){
            return true;
        }
    }

    return false;
}

int getDistance(vector<int> &arr, int N, int C){

    sort(arr.begin(), arr.end()); // NlogN

    int st = 1, end = arr[N-1]- arr[0], ans = -1; // arr[N-1] is max value of the array and arr[0] is the minimum value of the array.

    while(st <= end){ // O(log(range) * N)
        int mid = st + (end - st)/2;

        if(isPossible(arr, N, C, mid)){
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
    }

    return ans;
}

int main()
{
    //AGGRESSIVE COWS PROBLEM :- assign C cows to N stalls such that min distance between them is largest possible.Return largest minimum dsitance.

    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;

    return 0;
}