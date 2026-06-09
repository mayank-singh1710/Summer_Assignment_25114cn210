// Write a program to Find largest prime factor.
#include <stdio.h>

int main() {
    long long num, originalNum;
    long long largestPrimeFactor = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    originalNum = num;

    while (num % 2 == 0) {
        largestPrimeFactor = 2;
        num /= 2;
    }

    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    if (num > 2) {
        largestPrimeFactor = num;
    }

    if (originalNum <= 1) {
        printf("Numbers less than or equal to 1 do not have prime factors.\n");
    } else {
        printf("The largest prime factor of %lld is: %lld\n", originalNum, largestPrimeFactor);
    }

    return 0;
}