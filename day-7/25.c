// Write a program to Recursive factorial.
#include <stdio.h>

long long factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
   
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is: %lld\n", num, factorial(num));
    }

    return 0;
}