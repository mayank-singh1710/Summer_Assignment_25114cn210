#include <stdio.h>

int findPairWithSum(int arr[], int size, int target_sum) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("\nPair found: %d and %d (Sum = %d)\n", arr[i], arr[j], target_sum);
                return 1; 
            }
        }
    }
    printf("\nNo pair found with the given sum.\n");
    return 0;
}

int main() {
    int size, target_sum;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target sum to find: ");
    scanf("%d", &target_sum);
    
    findPairWithSum(arr, size, target_sum);
    
    return 0;
}