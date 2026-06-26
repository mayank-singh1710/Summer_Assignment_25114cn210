// Q108 Write a program to Create marksheet generation system.

#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float math, science, english, total, percentage;
    char grade;

    printf("--- Marksheet Generator ---\n");
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks for Math, Science, and English (out of 100):\n");
    scanf("%f %f %f", &math, &science, &english);

    // Calculations
    total = math + science + english;
    percentage = total / 3.0;

    // Determine Grade
    if (percentage >= 85) grade = 'A';
    else if (percentage >= 70) grade = 'B';
    else if (percentage >= 50) grade = 'C';
    else grade = 'F';

    // Print Marksheet Report
    printf("\n==================================\n");
    printf("            MARKSHEET             \n");
    printf("==================================\n");
    printf("Roll No: %d\tName: %s\n", roll, name);
    printf("----------------------------------\n");
    printf("Mathematics : %.1f / 100\n", math);
    printf("Science     : %.1f / 100\n", science);
    printf("English     : %.1f / 100\n", english);
    printf("----------------------------------\n");
    printf("Total Marks : %.1f / 300\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Final Grade : %c\n", grade);
    printf("==================================\n");

    return 0;
}