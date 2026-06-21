//  Write a program to Convert lowercase to uppercase.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        
        // Check if the character is a lowercase letter (between 'a' and 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 to convert it to uppercase
            str[i] = str[i] - 32;
        }
        
        i++; 
    }

    printf("String in Uppercase: %s\n", str);

    return 0;
}