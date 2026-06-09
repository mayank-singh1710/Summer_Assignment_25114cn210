// Write a program to Check Armstrong number. 
#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNum, temp, digits = 0, totalSum = 0;

    printf("Enter a number to check: ");
    scanf("%d", &number);

    originalNum = number;

    temp = number;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
    while (temp != 0) {
        int remainder = temp % 10;
        totalSum += round(pow(remainder, digits)); 
        temp /= 10;
    }

    if (totalSum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is NOT an Armstrong number.\n", originalNum);
    }

    return 0;
}