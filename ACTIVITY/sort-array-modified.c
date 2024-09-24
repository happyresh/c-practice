#include <stdio.h>

void reorder(int *arr, int n) {
    int i, temp;
    int swapped = 0; // Flag to track if any swaps were made

    do {
        swapped = 0; // Reset swapped flag for each pass
        for (i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // Swapping elements
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1; // Set swapped flag
            }
        }
    } while (swapped); // Repeat until no swaps are made in a pass
}

int main() {
    int n;

    // Get the number of elements in the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n]; // Declare the array with user-defined size

    // Get input for the array elements from the user
    printf("\nEnter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Sorting the array using reorder() function
    reorder(array, n);

    printf("\nElements of array sorted in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
