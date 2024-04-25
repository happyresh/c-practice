#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void reorder(int *arr, int n) {
    // Sorting the array using qsort
    qsort(arr, n, sizeof(int), compare);
}

int main() {
    int choice;
    do {
        int n;

        // Get the number of elements in the array from the user
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);

        int array[n]; // Declare the array with user-defined size

        // Get input for the array elements from the user
        printf("Enter %d integers:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }

        // Sorting the array using reorder() function
        reorder(array, n);

        printf("Elements of array sorted in ascending order:\n");
        for (int i = 0; i < n; i++) {
            printf("%d\n", array[i]);
        }

        // Ask the user if they want to repeat the process
        printf("Do you want to repeat the process? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
    } while (choice != 0);

    return 0;
}
