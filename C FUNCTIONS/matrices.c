#include <stdio.h>

void DESCENDING(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char repeat;
    
    do {
        int size;
        printf("Enter the size of the arrays (must be a positive integer): ");
        scanf("%d", &size);
        
        // Define and initialize ArrayA and ArrayB based on user input size
        int ArrayA[size];
        int ArrayB[size][size];
        int ArrayC[size];

        // Input values for ArrayA
        printf("Enter values for ArrayA (%d integers):\n", size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &ArrayA[i]);
        }

        // Input values for ArrayB
        printf("Enter values for ArrayB (%dx%d integers):\n", size, size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                scanf("%d", &ArrayB[i][j]);
            }
        }

        // Calculate ArrayC elements
        for (int i = 0; i < size; i++) {
            ArrayC[i] = 0;
            for (int j = 0; j < size; j++) {
                ArrayC[i] += ArrayA[j] * ArrayB[i][j];
            }
        }

        // Sort ArrayC in descending order
        DESCENDING(ArrayC, size);

        // Print Arrays
        printf("\nArrayA: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", ArrayA[i]);
        }
        printf("\n");

        printf("\nArrayB:\n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("%d ", ArrayB[i][j]);
            }
            printf("\n");
        }

        printf("\nSorted ArrayC (in descending order): ");
        for (int i = 0; i < size; i++) {
            printf("%d ", ArrayC[i]);
        }
        printf("\n");

        // Ask if the user wants to repeat the process
        printf("\nDo you want to repeat the process? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    printf("\nThank you for using the program.\n");

    return 0;
}