//Write a program to Check whether a number is palindrome. 

#include<stdio.h>
int main(){
    int num, rem, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    
    while(num > 0)
    {
        rem = num % 10;       // Get the last digit
        rev = rev * 10 + rem; // last digit to the reversed number
        num /= 10;            // Remove the last digit
    }
    
    if(temp == rev)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    
    return 0;
}
