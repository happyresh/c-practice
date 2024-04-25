#include <stdio.h>

// Function prototypes
int findMin(int numbers[][100], int rows, int cols);
int findMax(int numbers[][100], int rows, int cols);

int main() {
    int maxSize = 100; // Maximum size of the array
    int rows, cols;
    char choice;

    do {
        // User input for rows and columns
        printf("Enter the number of rows for the array (up to %d): ", maxSize);
        scanf("%d", &rows);
        printf("Enter the number of columns for the array (up to %d): ", maxSize);
        scanf("%d", &cols);

        // Input validation
        if (rows <= 0 || cols <= 0 || rows > maxSize || cols > maxSize) {
            printf("Invalid size. Rows and columns must be greater than 0 and less than or equal to %d.\n", maxSize);
            return 1; // Exit with error
        }

        // Array declaration based on user input
        int numbers[maxSize][maxSize];

        // Input numbers into the array
        printf("Enter %d numbers for the array:\n", rows * cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &numbers[i][j]);
            }
        }

        // Find minimum and maximum values in the array
        int min = findMin(numbers, rows, cols);
        int max = findMax(numbers, rows, cols);

        // Output minimum and maximum values
        printf("Minimum value: %d\n", min);
        printf("Maximum value: %d\n", max);

        // Ask if the user wants to repeat the process
        printf("Do you want to repeat the process? (Y/N): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character

    } while (choice == 'Y' || choice == 'y');
    
    printf("Thank you for using the program. Have a great day!\n");
    
    return 0;
}

// Function to find the minimum value in the array
int findMin(int numbers[][100], int rows, int cols) {
    int min = numbers[0][0];

    // Iterate through the array to find the minimum value
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (numbers[i][j] < min) {
                min = numbers[i][j];
            }
        }
    }

    return min;
}

// Function to find the maximum value in the array
int findMax(int numbers[][100], int rows, int cols) {
    int max = numbers[0][0];

    // Iterate through the array to find the maximum value
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (numbers[i][j] > max) {
                max = numbers[i][j];
            }
        }
    }

    return max;
}

