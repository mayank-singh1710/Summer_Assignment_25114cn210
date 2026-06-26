// Q106 Write a program to Create employee management system. 

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char role[30];
};

int main() {
    struct Employee roster[50];
    int count = 0, choice;

    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n2. Display Roster\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Employee ID: ");
            scanf("%d", &roster[count].id);
            printf("Enter Name: ");
            scanf(" %[^\n]s", roster[count].name);
            printf("Enter Designation: ");
            scanf(" %[^\n]s", roster[count].role);
            count++;
            printf("Employee registered!\n");
        } else if (choice == 2) {
            if (count == 0) {
                printf("No employees registered yet.\n");
            } else {
                printf("\nID\tName\t\tDesignation\n");
                printf("-----------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%-12s\t%s\n", roster[i].id, roster[i].name, roster[i].role);
                }
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}