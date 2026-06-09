// Write a program to Check strong number. 
#include <stdio.h>

int main() {
    int num, originalNum, remainder, totalSum = 0;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;

        long long factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        totalSum += factorial;
        num /= 10;
    }

    if (totalSum == originalNum && originalNum > 0) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}