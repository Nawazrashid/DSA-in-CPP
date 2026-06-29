#include<iostream>
using namespace std;

int main()
{
    // PRINT ALL THE UNIQUE VALUES IN THE ARRAY.

    int arr[] = {1,2,1,2,3,4,4,5};
    int size = 8;
    
    for(int i = 0; i<size; i++)
    {
        int count = 0;
        for(int j = 0; j<size; j++){  // ye sb element pr jaiga agar same element mila to count ko badha dega .
            if (arr[i] == arr[j]){
                count = count + 1;
            }
        }

        if (count == 1){ // agar count ki value 1 hui mtlb array me ye unique element hai to usko print kara denge.
            cout << arr[i] << " ";
        }
    }

    return 0;

}