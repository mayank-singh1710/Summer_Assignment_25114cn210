//  Write a program to Merge arrays.

#include <stdio.h>
int main() {
    int n1, n2, i, j;
    // first array input
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    // second array input
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    // merging arrays
    int mergedArray[n1 + n2];
    // Copy elements of first array to merged array
    for (i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];  
    }
    // Copy elements of second array to merged array
    for (j = 0; j < n2; j++) {
        mergedArray[i + j] = arr2[j]; 
    }
    
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArray[i]);
    }
    
    return 0;
}
