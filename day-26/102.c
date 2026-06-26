//  Write a program to Create voting eligibility system. 

#include <stdio.h>

int main() {
    int age;

    printf("=== Voting Eligibility System ===\n");
    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote! Please register at your nearest booth.\n");
    } else {
        int years_left = 18 - age;
        printf("You are not eligible to vote yet. You need to wait %d more year(s).\n", years_left);
    }

    return 0;
}