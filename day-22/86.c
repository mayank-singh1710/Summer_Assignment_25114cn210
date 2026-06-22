//  Write a program to Count words in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
       
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t') {
            
            if (i == 0 || sentence[i-1] == ' ' || sentence[i-1] == '\n' || sentence[i-1] == '\t') {
                words++;
            }
        }
    }

    printf("Total words: %d\n", words);

    return 0;
}