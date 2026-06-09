// Write a program to Recursive reverse number. 
#include <stdio.h>


int reverseNumber(int num, int rev) {
    
    if (num == 0) {
        return rev;
    }
    
    return reverseNumber(num / 10, rev * 10 + (num % 10));
}

int main() {
    int num, reversedNum = 0;
    printf("Enter an integer to reverse: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Reversed number: -");
        reversedNum = reverseNumber(-num, 0);
    } else {
        printf("Reversed number: ");
        reversedNum = reverseNumber(num, 0);
    }

    printf("%d\n", reversedNum);

    return 0;
}