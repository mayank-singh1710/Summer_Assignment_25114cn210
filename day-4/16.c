// Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter lower bound of the range: ");
    scanf("%d", &start);
    printf("Enter upper bound of the range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        int originalNum = i;
        int temp = i;
        int digits = 0;
        int totalSum = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        while (temp != 0) {
            int remainder = temp % 10;
            totalSum += round(pow(remainder, digits));
            temp /= 10;
        }

        if (totalSum == originalNum) {
            printf("%d ", originalNum);
        }
    }
    printf("\n");

    return 0;
}