//  Write a program to Find column-wise sum.

#include <stdio.h>
int main() {
    int r, c, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nColumn-wise sums:\n");
    for (j = 0; j < c; j++) {
        int col_sum = 0;          // Reset sum to 0 for every new column
        for (i = 0; i < r; i++) {
            col_sum += mat[i][j]; // Add each element in the column
        }
        
        printf("Sum of Column %d = %d\n", j + 1, col_sum);
    }

    return 0;
}