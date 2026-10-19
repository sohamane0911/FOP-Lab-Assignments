#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int largestInteger(int num) {
    char s[12];
    // Convert the integer into a string
    sprintf(s, "%d", num);
    int len = strlen(s);
    
    // Greedy selection sort matching by parity
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            // Check if both digits share the same parity
            if ((s[i] - '0') % 2 == (s[j] - '0') % 2) {
                // If the right-hand digit is larger, swap them
                if (s[j] > s[i]) {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
    }
    
    // Convert the string back to an integer
    return atoi(s);
}