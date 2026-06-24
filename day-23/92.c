//  Write a program to Find maximum occurring character.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequency[256] = {0};
    int i, max_count = 0;
    char max_char = ' ';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Count frequencies
    for (i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    // Scan the buckets to find the highest count
    for (i = 0; i < 256; i++) {
        if (frequency[i] > max_count) {
            max_count = frequency[i];
            max_char = (char)i; // Keep track of the character code
        }
    }

    if (max_count > 0) {
        printf("Maximum occurring character is '%c' (appears %d times)\n", max_char, max_count);
    } else {
        printf("String is empty.\n");
    }

    return 0;
}