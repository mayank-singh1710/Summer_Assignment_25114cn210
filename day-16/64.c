// Write a program to Remove duplicates from 
//array.

#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }
    
    int unique_index = 0; 
    
    for (int i = 0; i < size; i++) {
        int is_duplicate = 0;
        
        for (int j = 0; j < unique_index; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        
        if (!is_duplicate) {
            arr[unique_index] = arr[i];
            unique_index++;
        }
    }
    
    return unique_index; 
}

int main() {
    int size;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements (with or without duplicates):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int new_size = removeDuplicates(arr, size);
    
    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}