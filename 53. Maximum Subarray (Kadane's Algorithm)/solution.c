#include <stdio.h>   

int maxSubArray(int* nums, int numsSize) {
    int currSum = nums[0];
    int maxSum = nums[0];
    
    for (int i = 1; i < numsSize; i++) {
        
        currSum = (currSum > 0) ? currSum + nums[i] : nums[i];
        maxSum = (currSum > maxSum) ? currSum : maxSum;
    }
    
    return maxSum;
}
// learned logic of Kadane's Algorithm.
