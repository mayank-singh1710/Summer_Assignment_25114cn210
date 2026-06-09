//Write a program to Find sum of digits of a number.

#include<stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        rem = num % 10;  // Get the last digit
        sum += rem;      // Add the last digit to the sum
        num /= 10;       // Remove the last digit
    }
    printf("Sum of digits: %d", sum);
    return 0;
}