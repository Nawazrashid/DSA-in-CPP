#include<iostream>
using namespace std;

int getMaxSum(int matrix[][3], int rows, int cols) {
    int maxSum = INT32_MIN;

    for(int i = 0; i<rows; i++) {
        int rowSumI = 0;
        for(int j = 0; j<cols; j++) {
            rowSumI += matrix[i][j];
        }

        maxSum = max(maxSum, rowSumI);
    }

    return maxSum;
}

int getMaxColSum(int matrix[][3], int rows, int cols) {
    int maxColSum = INT32_MIN;

    for(int i = 0; i<cols; i++) {
        int colSumI = 0;
        for(int j = 0; j<rows; j++) {
            colSumI += matrix[j][i]; // j = rows , i = cols.
        }

        maxColSum = max(maxColSum, colSumI);
    }

    return maxColSum;
}

int main()
{
    // MAXIMUM ROW SUM RETURN

    int matrix[3][3] = {{5, 8, 2}, {1, 7, 8}, {9, 2, 2}};
    int rows = 3;
    int cols = 3;

    cout << "maximum row sum is : " << getMaxSum(matrix, rows, cols) << endl; // o/p:- 16 (1+7+8).
    cout << "maximum col sum is : " << getMaxColSum(matrix, rows, cols)<< endl; // o/p:- 17 (8+7+2) 

    return 0;
}