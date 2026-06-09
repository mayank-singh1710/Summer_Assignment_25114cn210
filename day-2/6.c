//Write a program to Reverse a number.

#include<stdio.h>
int main(){
    int num, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        rem = num % 10;       // Get the last digit
        rev = rev * 10 + rem; // last digit to the reversed number
        num /= 10;            // Remove the last digit
    }
    printf("Reversed number: %d", rev);
    return 0;
}