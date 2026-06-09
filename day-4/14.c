
// Write a program to Find nth Fibonacci term. 
#include <stdio.h>

int main() {
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("The 1st Fibonacci term is: 0\n");
    } else if (n == 2) {
        printf("The 2nd Fibonacci term is: 1\n");
    } else {
        long long a = 0, b = 1, next;
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("The %dth Fibonacci term is: %lld\n", n, b);
    }

    return 0;
}