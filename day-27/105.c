// Q105 Write a program to Create student record management system. 



#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

int main() {
    struct Student records[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n2. View All Students\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &records[count].id);
            printf("Enter Name: ");
            scanf(" %[^\n]s", records[count].name); // Reads string with spaces
            printf("Enter GPA: ");
            scanf("%f", &records[count].gpa);
            count++;
            printf("Record added successfully!\n");
        } else if (choice == 2) {
            if (count == 0) {
                printf("No records found.\n");
            } else {
                printf("\nID\tName\t\tGPA\n");
                printf("-----------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%-10s\t%.2f\n", records[i].id, records[i].name, records[i].gpa);
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