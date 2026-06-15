// Write a program to find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0], second = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {   // Old largest becomes second largest
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {  
            second = arr[i];
        }
    }

    printf("Second largest element is: %d\n", second);
    return 0;
}