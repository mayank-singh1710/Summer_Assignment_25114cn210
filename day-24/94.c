//  Write a program to Compress a string.

#include <stdio.h>
#include <string.h>

int isRotation(const char *s1, const char *s2) {
    int len = strlen(s1);

    // If lengths match, check every possible starting shift index
    if (len == strlen(s2)) {
        for (int i = 0; i < len; i++) {
            int match = 1;
            
            // Check if s2 matches s1 shifted by 'i' positions
            for (int j = 0; j < len; j++) {
                if (s1[(i + j) % len] != s2[j]) {
                    match = 0;  // Character mismatch found
                    break;
                }
            }
            if (match) return 1; // All characters matched for this shift
        }
    }
    return 0;
}

int main() {
    char s1[] = "abc";
    char s2[] = "bca";

    if (isRotation(s1, s2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}