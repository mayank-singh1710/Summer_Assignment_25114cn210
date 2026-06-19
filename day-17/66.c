//  Write a program to Union of arrays.

#include <stdio.h>
int main() {
    int n1, n2, i, j, k;
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
    // finding union of arrays
    int unionArray[n1 + n2];
    // Copy elements of first array to union array
    for (i = 0; i < n1; i++) {
        unionArray[i] = arr1[i];  
    }
    
    k = n1;
    // Check for elements in second array and add to union array if not present in first array
    for (j = 0; j < n2; j++) {
        int found = 0;
        for (i = 0; i < n1; i++) {
            if (arr2[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArray[k++] = arr2[j];
        }
    }

    printf("Union of arrays:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArray[i]);
    }
    
    return 0;
}