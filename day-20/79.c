//  Write a program to Find row-wise sum.

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

    printf("\nRow-wise sums:\n");
    for (i = 0; i < r; i++) {
        int row_sum = 0;          // Reset sum to 0 for every new row
                for (j = 0; j < c; j++) {
            row_sum += mat[i][j]; // Add each element in the row
        }
        
        printf("Sum of Row %d = %d\n", i + 1, row_sum);
    }

    return 0;
}