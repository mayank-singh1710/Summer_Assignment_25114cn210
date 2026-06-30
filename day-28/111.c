// Write a program to Create ticket booking system. 

#include <stdio.h>

int main()
{
    int seats = 10;
    int choice, book;

    while (1)
    {
        printf("\n--- Ticket Booking System ---\n");
        printf("Available Seats = %d\n", seats);

        printf("1. Book Ticket\n");
        printf("2. Check Seats\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of tickets: ");
            scanf("%d", &book);

            if (book <= seats)
            {
                seats -= book;
                printf("Booking Successful\n");
            }
            else
            {
                printf("Not Enough Seats\n");
            }
            break;

        case 2:
            printf("Remaining Seats = %d\n", seats);
            break;

        case 3:
            return 0;
        }
    }
}