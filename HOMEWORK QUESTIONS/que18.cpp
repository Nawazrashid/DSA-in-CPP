#include<iostream>
using namespace std;

int main ()
{
    // INDEX OF SMALLEST AND LARGEST NUMBER IN THE ARRAY : APNE SE KIYA MAINE.

    int nums[] = {34, 67, -23, 98, 100};
    int size = 5;

    int smallest = INT32_MAX;
    int largest = INT32_MIN;

    int x,y;

    for(int i=0; i<size; i++)
    {
        if(nums[i] < smallest)
        {
            smallest = nums[i];
            x = i;
        }
        
    }

    for(int i=0; i<size; i++)
    {
        if(nums[i] > largest)
        {
            largest = nums[i];
            y = i;
        }
        
    }

    cout << "Smallest number in the given array is : " << smallest << " and its index is : " << x << endl;

    cout << "Largest number in the given array is : " << largest << " and its index is : " << y << endl;
    
    return 0;

}    

