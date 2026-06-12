// Write a program to Write function for palindrome. 

#include <stdio.h>
// Returns 1 if true, 0 if false
int isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    int remainder;

    // Loop to reverse the number
    while (n > 0) {
        remainder = n % 10;          // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        n = n / 10;                  // Remove the last digit
    }

    // If the original number matches the reversed number, it's a palindrome
    if (original == reversed) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPalindrome(num) == 1) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}