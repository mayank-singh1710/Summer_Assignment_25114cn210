// Q107 Write a program to Create salary management system. 

#include <stdio.h>

struct Salary {
    char name[50];
    float base;
    float allowance;
    float tax;
    float net_salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Salary emp[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", emp[i].name);
        printf("Base Salary: $");
        scanf("%f", &emp[i].base);

        // Calculations
        emp[i].allowance = emp[i].base * 0.10; // 10% allowance
        emp[i].tax = emp[i].base * 0.05;       // 5% tax deduction
        emp[i].net_salary = emp[i].base + emp[i].allowance - emp[i].tax;
    }

    printf("\n--- Salary Slip Summary ---\n");
    printf("%-15s %-12s %-10s %-8s %-12s\n", "Name", "Base", "Allow.", "Tax", "Net Salary");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-15s $%-11.2f $%-9.2f $%-7.2f $%.2f\n", 
               emp[i].name, emp[i].base, emp[i].allowance, emp[i].tax, emp[i].net_salary);
    }

    return 0;
}