// Write a program to Count even and odd elements. 

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) { 
            even++;
        } else {
            odd++;
        }
    }

    printf("The number of even elements in the array is: %d\n", even);
    printf("The number of odd elements in the array is: %d\n", odd);

    return 0;
}