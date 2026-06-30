// Write a program to Create library management system. 

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            n++;
            break;

        case 2:
            printf("\nBook List\n");
            for (i = 0; i < n; i++)
            {
                printf("ID:%d Name:%s Author:%s\n",
                       b[i].id, b[i].name, b[i].author);
            }
            break;

        case 3:
            printf("Enter Book ID: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    printf("Book Found\n");
                    printf("%d %s %s\n",
                           b[i].id, b[i].name, b[i].author);
                    found = 1;
                }
            }

            if (!found)
                printf("Book Not Found\n");

            break;

        case 4:
            return 0;
        }
    }
}