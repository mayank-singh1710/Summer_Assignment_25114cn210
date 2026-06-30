// Q118 Write a program to Create mini library system. 

#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n = 0, choice, i;

    while(1)
    {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Book ID: ");
                scanf("%d", &b[n].id);

                printf("Book Name: ");
                scanf(" %[^\n]", b[n].name);

                printf("Author Name: ");
                scanf(" %[^\n]", b[n].author);

                n++;
                break;

            case 2:
                printf("\nBook List\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d %s %s\n",
                           b[i].id,
                           b[i].name,
                           b[i].author);
                }
                break;

            case 3:
                return 0;
        }
    }
}