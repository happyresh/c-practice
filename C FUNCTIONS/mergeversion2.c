#include <stdio.h>

// Function prototypes
void MERGE(int N[], int B[], int n1, int n2);
void SORT(int arr[], int size);

int main() {
    int size, i;
    char choice;

    do {
        printf("Enter the size for arrays N and B (both must be the same size): ");
        scanf("%d", &size);

        int N[size], B[size];

        printf("Input %d integers for array N:\n", size);
        for (i = 0; i < size; i++) {
            scanf("%d", &N[i]);
        }

        printf("Input %d integers for array B:\n", size);
        for (i = 0; i < size; i++) {
            scanf("%d", &B[i]);
        }

        // Calling the function to merge array N and array B into COMBINE
        MERGE(N, B, size, size);

        printf("Do you want to repeat the process? (Y/N): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character

    } while (choice == 'Y' || choice == 'y');

    printf("Thank you for using the program. Have a great day!\n");

    return 0;
}

// Function to merge the two arrays
void MERGE(int N[], int B[], int n1, int n2) {
    int COMBINE[2 * n1]; // Assuming the maximum size for COMBINE

    int combinedSize = 0;

    // Copy elements from N to COMBINE array, avoiding duplicates
    for (int i = 0; i < n1; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < combinedSize; j++) {
            if (N[i] == COMBINE[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            COMBINE[combinedSize++] = N[i];
        }
    }

    // Copy elements from B to COMBINE array, avoiding duplicates and elements already in N
    for (int i = 0; i < n2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < combinedSize; j++) {
            if (B[i] == COMBINE[j]) {
                isDuplicate = 1;
                break;
            }
        }
        // Check if the element is already in N
        for (int j = 0; j < n1; j++) {
            if (B[i] == N[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            COMBINE[combinedSize++] = B[i];
        }
    }

    // Sort the combined array in ascending order
    SORT(COMBINE, combinedSize);

    // Display the combined array
    printf("Combined array with unique values in ascending order:\n");
    for (int i = 0; i < combinedSize; i++) {
        printf("%d ", COMBINE[i]);
    }
    printf("\n");
}

// Function to sort the array in ascending order using bubble sort
void SORT(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
