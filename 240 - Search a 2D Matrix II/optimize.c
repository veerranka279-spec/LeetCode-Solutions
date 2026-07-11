// here I got to know that the optimize ay to solve this is Stair Case search method.

#include<stdio.h>

int r = 0;
int c = matrixColSize[0] - 1;

while (r < matrixSize && c >= 0) {
    int x = matrix[r][c];
    if (x == target) return true;
    if (x > target) c--;   
    else r++;              
}
