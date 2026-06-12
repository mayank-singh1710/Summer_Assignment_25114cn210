// Write a program to Write function for Armstrong. 

#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;
    int remainder;
   
    while (temp > 0) {     // Count the number of digits
        digits++;
        temp = temp / 10;
    }

    temp = n;
    while (temp > 0) {          // Calculate the sum of power of digits
        remainder = temp % 10;      // Get the last digit
        sum += round(pow(remainder, digits));   // Add the power of the digit to the sum  
        temp = temp / 10;    // Remove the last digit
    }

    if (sum == original) {      
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num) == 1) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}