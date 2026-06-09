// Write a program to Generate Fibonacci series.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        long long t1 = 0, t2 = 1, nextTerm;
        printf("Fibonacci Series up to %d terms: \n", n);

        for (int i = 1; i <= n; ++i) {
            printf("%lld ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("\n");
    }

    return 0;
}