//  Write a program to Find common elements.
#include <stdio.h>
int main() {
    int n1, n2, i, j, k = 0;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int commonElements[n1 < n2 ? n1 : n2]; // Size of common elements array is the minimum of n1 and n2
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                commonElements[k++] = arr1[i]; // Store the common element
                break; // Break to avoid duplicates in common elements
            }
        }
    }

    printf("Common elements:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", commonElements[i]);
    }
    
    return 0;
}