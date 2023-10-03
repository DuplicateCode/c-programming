#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n]; // Declare an array of size n

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Read array elements from the user
    }

    int searchItem;
    printf("Enter the element to search: ");
    scanf("%d", &searchItem);

    // Time Complexity: O(N) where N is the size of the array
    // Space Complexity: O(1) because we are using a fixed array

    for (int i = 0; i < n; i++) {
        if (a[i] == searchItem) {
            printf("Item found at index: %d\n", i);
            return 0;
        }
    }

    printf("Item not found\n");
    return 0;
}


