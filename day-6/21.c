//Write a program to Convert decimal to binary. 
#include <stdio.h>

int main() {
    int decimal, temp;
    int binary[32]; 
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    temp = decimal;

    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("Binary equivalent of %d is: ", decimal);

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}