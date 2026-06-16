#include <stdio.h>

void findMaxFrequency(int arr[], int size) {
    int max_element = arr[0];
    int max_count = 0;
    
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }
    
    printf("\nElement with maximum frequency is %d (Appears %d times)\n", max_element, max_count);
}

int main() {
    int size;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    findMaxFrequency(arr, size);
    
    return 0;
}