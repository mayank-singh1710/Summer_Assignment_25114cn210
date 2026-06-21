//  Write a program to Reverse a string.

#include<stdio.h>
int main() {
    char str[100], reversed[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    printf("Reversed string: %s\n", reversed);
    return 0;
}