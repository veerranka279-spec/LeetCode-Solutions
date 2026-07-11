// After solving question 74 it seemed same for question 240 also but the catch in the question was not logic it was the Time Complexity.
// the runtime of mine by this code was 980 ms but the optimum runtime was considered to be 35 ms, which forced me to think this way.
#include<stdio.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
     int row = matrixSize;
     int column = matrixColSize[0];

     for (int i = 0; i < row; i++){
        for (int j = 0; j< column; j++){
            if (matrix[i][j] == target){
                return true;
            }
        }
     }return false;
}
