#include <stdlib.h>
// first time used malloc key word 
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int appear = 0;
    int count = 0;
    int* result = malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0 ; i < numsSize ; i++){
        if (nums[i] == target){
            count++;
        }
    }
   if (count == 0) {
    result[0] = -1;
    result[1] = -1;
    return result;
} 
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == target){
        if (appear == 0) {       
            result[0] = i;
            appear = 1;          
        }
        result[1] = i;          
    }
    }return result;
    
}
