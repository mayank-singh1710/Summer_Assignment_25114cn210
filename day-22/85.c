//  Write a program to Check palindrome string.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int i, len, isPalindrome = 1;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++) {
        if (sentence[i] != sentence[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
