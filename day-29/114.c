// Q114 Write a program to Create menu-driven array operations system. 

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int choice, sum = 0, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (1)
    {
        printf("\n--- Array Operations ---\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Maximum Element\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array Elements: ");
            for (i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
            break;

        case 2:
            sum = 0;
            for (i = 0; i < n; i++)
                sum += a[i];
            printf("Sum = %d\n", sum);
            break;

        case 3:
            max = a[0];
            for (i = 1; i < n; i++)
                if (a[i] > max)
                    max = a[i];
            printf("Maximum = %d\n", max);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}