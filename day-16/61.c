//Q61 Write a program to Find missing number in 
//array. 


#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    // Total sum expected for numbers from 1 to n
    int total_sum = (n * (n + 1)) / 2;
    int current_sum = 0;
    
    // Array has n-1 elements
    for (int i = 0; i < n - 1; i++) {
        current_sum += arr[i];
    }
    
    return total_sum - current_sum;
}

int main() {
    int n;
    
    printf("Enter the total range of numbers (n): ");
    scanf("%d", &n);
    
    int arr[n - 1];
    printf("Enter %d distinct elements (from 1 to %d with one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    int missing = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);
    
    return 0;
}