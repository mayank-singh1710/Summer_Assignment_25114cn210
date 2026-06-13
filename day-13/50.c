// Write a program to Find sum and average of array. 

#include <stdio.h>

int main() {
    int  n, i, sum = 0;
    float average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / n;

    printf("The sum of the array elements is: %d\n", sum);
    printf("The average of the array elements is: %f\n", average);

    return 0;
}