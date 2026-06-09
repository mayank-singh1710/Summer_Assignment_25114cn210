// Write a program to Find product of digits. 

#include<stdio.h>
int main(){
    int num, rem, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        rem = num % 10;   // Get the last digit
        product *= rem;   // Multiply the last digit to the product
        num /= 10;        // Remove the last digit
    }
    printf("Product of digits: %d", product);
    return 0;
}