#include <stdio.h>

int main() {
    int maxSize = 100; // Maximum size of the array
    int size;

    printf("Enter the size of the array (up to %d): ", maxSize);
    scanf("%d", &size);

    if (size <= 0 || size > maxSize) {
        printf("Invalid size. Size must be greater than 0 and less than or equal to %d.\n", maxSize);
        return 1; // Exit with error
    }

    int numbers[maxSize];

    printf("Enter %d numbers for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
