//  Write a program to Remove duplicate characters.


#include <stdio.h>

void removeDuplicates(char *str) {
    int seen[256] = {0}; // Checklist for all ASCII characters (0 = not seen, 1 = seen)
    int writeIndex = 0;  // Tracks where to write the next unique character

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        // If we haven't seen this character yet
        if (seen[ch] == 0) {
            seen[ch] = 1;         // Mark it as seen
            str[writeIndex] = ch; // Move it to the unique character zone
            writeIndex++;         // Advance the write pointer
        }
    }

    // Add the null terminator to terminate the modified string
    str[writeIndex] = '\0';
}

int main() {
    char str[] = "programming";

    printf("Original string: %s\n", str);
    
    removeDuplicates(str);
    
    printf("After removing duplicates: %s\n", str);

    return 0;
}