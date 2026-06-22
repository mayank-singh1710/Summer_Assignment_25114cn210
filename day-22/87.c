//  Write a program to Character frequency.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int freq[256] = {0};  
    int i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    for (i = 0; sentence[i] != '\0'; i++) {
        freq[(unsigned char)sentence[i]]++;
    }

    printf("\nCharacter frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != '\n') {  
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
