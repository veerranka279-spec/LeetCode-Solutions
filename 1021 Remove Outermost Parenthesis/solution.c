/*
 * LeetCode 1021 - Remove Outermost Parentheses
 * Solved using depth counter approach(first time): track nesting depth,
 */

#include <stdlib.h>
#include <string.h>

char* removeOuterParentheses(char* s) {
    int len = strlen(s);
    char* result = (char*)malloc((len + 1) * sizeof(char));
    int idx = 0;
    int depth = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            if (depth > 0) {
                result[idx++] = s[i];   // outermost nahi hai, include karo
            }
            depth++;
        } else { // s[i] == ')'
            depth--;
            if (depth > 0) {
                result[idx++] = s[i];   // outermost nahi hai, include karo
            }
        }
    }

    result[idx] = '\0';
    return result;
}
