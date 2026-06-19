//  Write a program to Find diagonal sum.

#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
    printf("\n");
    }

    int pridiaSum = 0, secdiaSum = 0;
    for (i = 0; i < n; i++) {
        pridiaSum += mat[i][i]; // Sum of primary diagonal
        secdiaSum += mat[i][n - 1 - i]; // Sum of secondary diagonal
    }

    printf("Sum of primary diagonal: %d\n", pridiaSum);
    printf("Sum of secondary diagonal: %d\n", secdiaSum);

    return 0;
}