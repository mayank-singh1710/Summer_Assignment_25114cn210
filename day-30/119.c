// Q119 Write a program to Create mini employee management system. 

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i;

    while(1)
    {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                break;

            case 2:
                printf("\nEmployee Records\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nID     : %d", emp[i].id);
                    printf("\nName   : %s", emp[i].name);
                    printf("\nSalary : %.2f\n", emp[i].salary);
                }
                break;

            case 3:
                return 0;
        }
    }
}