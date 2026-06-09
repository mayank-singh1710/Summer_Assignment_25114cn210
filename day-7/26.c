// Write a program to Recursive Fibonacci. 
#include <stdio.h>

int fibonacci(int n) {
    
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int position;
    printf("Enter the position (n): ");
    scanf("%d", &position);

    if (position <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The %dth Fibonacci term is: %d\n", position, fibonacci(position));
    }

    return 0;
}