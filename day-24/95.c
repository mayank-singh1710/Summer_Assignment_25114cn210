//  Write a program to Find longest word.

#include <stdio.h>
#include <string.h>

void findLongestWord(const char *str, char *longest) {
    int maxLen = 0;
    int currentLen = 0;
    int startIdx = 0;
    int maxStartIdx = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        // If character is not a space, it's part of the current word
        if (str[i] != ' ') {
            if (currentLen == 0) {
                startIdx = i; // Mark where this word begins
            }
            currentLen++;
        } 
        // If it is a space or the end of the string, the word has ended
        if (str[i] == ' ' || str[i + 1] == '\0') {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIdx = startIdx; // Save the starting point of the longest word
            }
            currentLen = 0; // Reset length for the next word
        }
    }

    // Copy the longest word into the output buffer
    strncpy(longest, &str[maxStartIdx], maxLen);
    longest[maxLen] = '\0'; // Manually add the null terminator
}

int main() {
    char sentence[] = "Learning C programming is fun";
    char longestWord[50];

    findLongestWord(sentence, longestWord);

    printf("Sentence: %s\n", sentence);
    printf("Longest word: %s\n", longestWord);

    return 0;
}
