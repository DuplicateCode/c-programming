#include<stdio.h>
int main()
{
    int a[] = {4, 5, 76, 3, 2, 4};
    int searchItem;
    scanf("%d", &searchItem);
    // Time Complexity : O(N) = In this problem time complexity = 6
    // Space Complexity: O(1) because to do work at fixed array.
    for(int i = 0; i < 6; i++)
    {
        if(a[i] == searchItem)
        {
            printf("Item found at index: %d\n", i);
            return;
        }
    }
    printf("Item not found");
    return 0;
}
