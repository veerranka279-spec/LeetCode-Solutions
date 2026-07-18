/*
 * LeetCode 75 - Sort Colors
 * Approach: Dutch National Flag Algorithm
 * Time: O(n) | Space: O(1) | Single-pass, in-place
 * Bubble Sort is the brute method 
 * low  -> boundary for 0s (everything before low is 0)
 * mid  -> current pointer being examined
 * high -> boundary for 2s (everything after high is 2)
 */

#include<stdio.h>

void sortColors(int* nums, int numsSize) {
    int low = 0, mid = 0, high = numsSize - 1;
    int t;

    while (mid <= high) {
        if (nums[mid] == 0) {
            t = nums[low];
            nums[low] = nums[mid];
            nums[mid] = t;
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else{
            t = nums[mid];
            nums[mid] = nums[high];
            nums[high] = t;
            high--;
            
        }
    }
}
