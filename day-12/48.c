// Write a program to Write function for perfect number.
#include <stdio.h>

int isPerfect(int n) {

    if (n <= 0) {
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < n; i++) {   
        if (n % i == 0) {   
            sum += i;   
        }
    }
    return (sum == n) ? 1 : 0;  // return 1 if sum of divisors equals n, otherwise return 0
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPerfect(num) == 1) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}
