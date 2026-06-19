//  Write a program to Intersection of arrays.

#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    for (i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    for (i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int intersectionArray[n1 < n2 ? n1 : n2];

    for (i = 0; i < n1; i++) {
        // Check if arr1[i] was ALREADY added to intersectionArray
        int alreadyAdded = 0;
        for (int m = 0; m < k; m++) {
            if (intersectionArray[m] == arr1[i]) {
                alreadyAdded = 1;
                break;
            }
        }
        
        // If it's already in our results, skip it entirely
        if (alreadyAdded) continue;

        // Check if it exists in the second array
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                intersectionArray[k++] = arr1[i];
                break; 
            }
        }
    }

    printf("True Intersection (Unique):\n");
    for (i = 0; i < k; i++) printf("%d ", intersectionArray[i]);
    
    return 0;
}