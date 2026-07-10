/*
 * LeetCode 54 - Spiral Matrix
 * Solved first using extra tracking variables(7 variables); refactored later to
 * standard 4-boundary spiral approach for clarity.
 */
#include<stdlib.h>

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];   
    
    int* result = malloc(rows * cols * sizeof(int));
    *returnSize = rows * cols;
  
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;
    int idx = 0;
    
    while (top <= bottom && left <= right) {
        
        for (int col = left; col <= right; col++) {
            result[idx++] = matrix[top][col];
        }
        top++;
        
        for (int row = top; row <= bottom; row++) {
            result[idx++] = matrix[row][right];
        }
        right--;
        
        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                result[idx++] = matrix[bottom][col];
            }
            bottom--;
        }
        
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                result[idx++] = matrix[row][left];
            }
            left++;
        }
    }
    
    return result;
}
