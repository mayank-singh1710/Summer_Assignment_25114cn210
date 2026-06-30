// Q116 Write a program to Create inventory management system.

#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n = 0, choice, i;

    while (1)
    {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &item[n].id);

            printf("Enter Item Name: ");
            scanf(" %[^\n]", item[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &item[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &item[n].price);

            n++;
            printf("Item Added Successfully.\n");
            break;

        case 2:
            printf("\nInventory List\n");

            for (i = 0; i < n; i++)
            {
                printf("\nID       : %d", item[i].id);
                printf("\nName     : %s", item[i].name);
                printf("\nQuantity : %d", item[i].quantity);
                printf("\nPrice    : %.2f\n", item[i].price);
            }
            break;

        case 3:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}