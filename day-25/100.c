//  Write a program to Sort words by length. 

#include <stdio.h>
#include <string.h>

void sortWordsByLength(char words[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare lengths instead of alphabetical values
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap the strings
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
}

int main() {
    char words[5][50] = {"Elephant", "Cat", "Banana", "To", "Dog"};
    int n = 5;

    sortWordsByLength(words, n);

    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Length: %lu)\n", words[i], strlen(words[i]));
    }
    return 0;
}