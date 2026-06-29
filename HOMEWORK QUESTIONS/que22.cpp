#include<iostream>
using namespace std;

int main()
{
    // INTERSECTION OF TWO ARRAYS

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 3, 7, 1};

    int size1 = 5, size2 = 4;

    for(int i = 0; i<size1; i++)
    {
        for(int j = 0; j<size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }

    cout << endl;

    return 0;
}