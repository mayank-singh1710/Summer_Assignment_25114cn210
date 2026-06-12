// Write a program to Write function to check prime

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n; i++) {   // check if any number from 2 up to n-1 divides n
        if (n % i == 0) {
            return 0;         // n is divisible by i, hence not prime
        }
    }
    return 1;     // n is prime if it is not divisible by any number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)==1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}