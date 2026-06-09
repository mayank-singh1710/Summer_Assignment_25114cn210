// Write a program to Find x^n without pow(). 
#include <stdio.h>

int main() {
    double x, result = 1.0;
    int n, originalN;

    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    originalN = n;

    int absoluteN = (n < 0) ? -n : n;

    for (int i = 1; i <= absoluteN; i++) {
        result *= x;
    }

    if (originalN < 0) {
        result = 1.0 / result;
    }

    printf("%.2lf raised to the power of %d is: %.6lf\n", x, originalN, result);

    return 0;
}