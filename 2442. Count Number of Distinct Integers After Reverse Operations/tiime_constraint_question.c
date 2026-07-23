// this code was not passed as time limit was less than taken by my code although its correct
#include <stdlib.h>

int countDistinctIntegers(int* nums, int numsSize) {
    int newSize = numsSize * 2;
    int* arr = malloc(newSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) arr[i] = nums[i];

    for (int i = 0; i < numsSize; i++) {
        int rev = 0, x = nums[i];
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        arr[i + numsSize] = rev;
    }

    int count = 0;
    for (int i = 0; i < newSize; i++) {
        int isDup = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) { isDup = 1; break; }
        }
        if (!isDup) count++;
    }
    free(arr);
    return count;
}
