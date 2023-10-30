#include <stdio.h>
#include <stdlib.h>

int lis(int arr[], int n) {
    // Implementation of LIS algorithm remains the same
    // ...
}

int main() {
    int n;

    // Getting the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);

    // Getting the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Computing the length of LIS
    int length = lis(arr, n);

    // Printing the length of LIS
    printf("Length of Longest Increasing Subsequence is: %d\n", length);

    // Freeing the dynamically allocated memory
    free(arr);

    return 0;
}
