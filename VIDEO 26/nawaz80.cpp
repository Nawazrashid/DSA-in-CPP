#include<iostream>
using namespace std;

int main()
{
    //LINEAR SEARCH IN 2D ARRAYS

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    int key = 7;

    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            if(matrix[i][j] == key) {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}