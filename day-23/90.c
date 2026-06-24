//  Write a program to Find first repeating character.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequency[256] = {0}; // Buckets initialized to 0
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        int ascii = (unsigned char)str[i];

        // If this bucket already has a 1, it means we saw this letter before!
        if (frequency[ascii] == 1) {
            printf("First repeating character is: '%c'\n", str[i]);
            found = 1;
            break; // Stop immediately
        }
        
        frequency[ascii]++; // Mark it as seen
    }

    if (!found) {
        printf("No repeating characters found.\n");
    }

    return 0;
}