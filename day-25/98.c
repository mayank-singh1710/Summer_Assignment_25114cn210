//  Write a program to Find common characters in strings. 
#include <stdio.h>
#include <string.h>

void findCommonChars(const char *s1, const char *s2) {
    int count1[256] = {0};
    int count2[256] = {0};

    // Count character frequencies for both strings
    for (int i = 0; s1[i] != '\0'; i++) count1[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0'; i++) count2[(unsigned char)s2[i]]++;

    printf("Common characters: ");
    for (int i = 0; i < 256; i++) {
        if (count1[i] > 0 && count2[i] > 0) {
            printf("%c ", i);
        }
    }
    printf("\n");
}

int main() {
    char str1[] = "apple";
    char str2[] = "plastic";

    findCommonChars(str1, str2); // Output should be: a p l
    return 0;
}