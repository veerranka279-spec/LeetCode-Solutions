#include <stdbool.h>
#include <stddef.h>

bool isPalindrome(struct ListNode* head) {
     int array[100005]; 
    int size = 0;
    
    // Converting Singly-Linked-List into Array
    struct ListNode* temp = head;
    while (temp != NULL) {
        array[size] = temp->val; 
        size++;                  
        temp = temp->next;       
    }
    
   
    int left = 0;
    int right = size - 1;
    while (left < right) {
        if (array[left] != array[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}
