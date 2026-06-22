//  Write a program to Remove spaces from string.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int i, j = 0;
    char new_sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            new_sentence[j++] = sentence[i];
        }
    }
    new_sentence[j] = '\0';

    printf("Sentence after removing spaces: %s\n", new_sentence);

    return 0;
}
