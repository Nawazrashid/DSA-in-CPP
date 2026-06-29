#include<iostream>
using namespace std;

int main()
{
    // SWAP MIN AND MAXIMUM OF THE ARRAY.

    int arr[] = {1,4,6,2,3};
    int size = 5;

    int smallest = 0;
    int largest = 0;

    for (int i = 1; i<size; i++)
    {
        if(arr[i] < arr[smallest])
        {
            smallest = i;
        }

        if(arr[i] > arr[largest])
        {
            largest = i;
        }
    }

    swap(arr[smallest], arr[largest]);

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}