//  Write a program to Check anagram strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int frequency[256] = {0};
    int i, is_anagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // If lengths are different, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        is_anagram = 0;
    } else {
        // Count up for string 1, count down for string 2
        for (i = 0; str1[i] != '\0'; i++) {
            frequency[(unsigned char)str1[i]]++;
            frequency[(unsigned char)str2[i]]--;
        }

        // Check if all buckets are 0
        for (i = 0; i < 256; i++) {
            if (frequency[i] != 0) {
                is_anagram = 0; // Found a mismatch
                break;
            }
        }
    }

    if (is_anagram) {
        printf("The strings are Anagrams.\n");
    } else {
        printf("The strings are NOT Anagrams.\n");
    }

    return 0;
}