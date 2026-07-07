#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    
    
    for (int i = 0; i < 32; i++) {
        int bitSum = 0;
        
      
        for (int j = 0; j < numsSize; j++) {
            if ((nums[j] >> i) & 1) {
                bitSum++;
            }
        }
        
      
        if (bitSum % 3 != 0) {
            result |= (1U << i); 
        }
    }
    
    return result;
}
int main() {
    int nums[] = {2, 2, 3, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Result: %d\n", singleNumber(nums, size));
    return 0;
}
