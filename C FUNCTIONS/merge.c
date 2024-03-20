#include <stdio.h>

// Function prototype
void MERGE(int N[], int B[], int n1, int n2);

int main() {
    int N[5], B[5], i;
    char choice;

    do {
        // Input 5 unique integers for array N
        printf("Input 5 integers for array N: ");
        for (i = 0; i < 5; i++) {
            scanf("%d", &N[i]);
        }

        // Input 5 unique integers for array B
        printf("Input 5 integers for array B: ");
        for (i = 0; i < 5; i++) {
            scanf("%d", &B[i]);
        }

        // Calling the function to merge array N and array B into COMBINE
        MERGE(N, B, 5, 5);

        printf("Do you want to repeat the process? (Y/N): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character

    } while (choice == 'Y' || choice == 'y');

    printf("Thank you for using the program. Have a great day!\n");

    return 0;
}

// Function to merge the two arrays
void MERGE(int N[], int B[], int n1, int n2) {
    int COMBINE[10];
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

    // Display the combined array
    printf("Combined array with unique values:\n");
    for (int i = 0; i < combinedSize; i++) {
        printf("%d ", COMBINE[i]);
    }
    printf("\n");
}
