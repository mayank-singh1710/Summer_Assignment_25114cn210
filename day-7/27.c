// Write a program to Recursive sum of digits. 
#include <stdio.h>


int sumOfDigits(int num) {
    
    if (num == 0) {
        return 0;
    }
    
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = (num < 0) ? -num : num;

    result = sumOfDigits(temp);
    printf("The sum of digits of %d is: %d\n", num, result);

    return 0;
}