#include <stdio.h>

// Function prototypes
int findMin(int numbers[], int size);
int findMax(int numbers[], int size);

int main() {
    int maxSize = 100; // Maximum size of the array
    int size;
    char choice;

    do {
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

        int min = findMin(numbers, size);
        int max = findMax(numbers, size);

        printf("Minimum value: %d\n", min);
        printf("Maximum value: %d\n", max);

        printf("Do you want to repeat the process? (Y/N): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character

    } while (choice == 'Y' || choice == 'y');
    
    printf("Thank you for using the program. Have a great day!\n");
    
    return 0;
}

// Function to find the minimum value
int findMin(int numbers[], int size) {
    int min = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    return min;
}

// Function to find the maximum value
int findMax(int numbers[], int size) {
    int max = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}
