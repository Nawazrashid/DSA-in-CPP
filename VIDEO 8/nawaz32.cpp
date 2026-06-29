#include<iostream>
using namespace std;

int main()
{
    // FIND THE SMALLEST AND LARGEST NUMBER IN THE ARRAY.
    
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT16_MAX; // INT_MAX = +INFINITY IN C++.
    int largest = INT16_MIN; // INT_MIN = -INFINITY IN C++.

    for(int i=0; i<size; i++)
    {
        if(nums[i] < smallest)
        {
            smallest = nums[i]; // or we can write smallest = min(nums[i] , smallest).
        }

        largest = max(nums[i] , largest);
    }

    cout << "Smallest number in the given array is : " << smallest << endl;
    cout << "Largest number in the given array is : " << largest << endl;

    return 0;

}