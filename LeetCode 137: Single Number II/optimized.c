#include <stdio.h>

int singleNumberBetter(int* nums, int numsSize) {
    int ones = 0;
    int twos = 0;
    
    // Single loop runs exactly N times which reduces time complexity
    for (int j = 0; j < numsSize; j++) {
        ones = (ones ^ nums[j]) & ~twos;
        twos = (twos ^ nums[j]) & ~ones;
    }
    
    return ones;
}
