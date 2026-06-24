//  Write a program to Find first non-repeating character.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequency[256] = {0}; 
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    // Count how many times each character appears
    for (i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    // Walk through the string from left to right 
    // and find the first character whose count is exactly 1
    for (i = 0; str[i] != '\0'; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character is: '%c'\n", str[i]);
            found = 1;
            break;     // Stop immediately after finding the first one
        }
    }

    if (!found) {
        printf("All characters are repeating or string is empty.\n");
    }

    return 0;
}