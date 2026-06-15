// Write a program to Frequency of an element
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 20, 40, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 20;
    int count = 0;

    for (int i = 0; i < n; i++) {  // Loop through the array to count occurrences of x
        if (arr[i] == x) {
            count++;
        }
    }

    printf("Frequency of %d is %d\n", x, count);
    return 0;
}