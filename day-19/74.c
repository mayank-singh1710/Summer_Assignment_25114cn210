//  Write a program to Subtract matrices.

#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &r, &c);

    int m1[r][c], m2[r][c], difference[r][c];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("First matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("Second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    // Subtracting the two matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            difference[i][j] = m1[i][j] - m2[i][j];
        }
    }

    printf("Difference of the two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}
