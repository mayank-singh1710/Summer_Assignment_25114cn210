//  Write a program to Check symmetric matrix.

#include <stdio.h>
#define MAX 100

int main() {
    int n, i, j;
    int mat[MAX][MAX];

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Check if the matrix is symmetric
    int symmetric = 1; // Assume the matrix is symmetric
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
           if (mat[i][j] != mat[j][i]) {
            symmetric = 0; 
            break;         // Break out of the inner loop
           }
        }
    // if we found a mismatch then break the outer loop
        if (symmetric == 0) {
        break; 
        }
    }


    if (symmetric == 1) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;

}