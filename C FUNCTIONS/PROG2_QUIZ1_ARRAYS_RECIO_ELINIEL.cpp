/* Recio, Elinie V. | BSIT 1-2D 
This code will print the output in a horizontal format */

#include <stdio.h>

// Function to compute sum of two succeeding elements and assign to Array_B
void ADD(int arrayA[], int arrayB[], int sizeA) {
    for (int i = 0; i < sizeA - 1; i++) {
        arrayB[i] = arrayA[i] + arrayA[i + 1];
    }
}

// Added feature: Function to validate integer input
int inputValidation() {
    int num;
    while (1) {
        if (scanf("%d", &num) == 1) { // Check if scanf successfully read an integer
            break;
        } else {
            printf("Invalid input. Please enter an integer: "); // If the input is not integer, the user can have a chance to input an integer

            while (getchar() != '\n');  // Clear input buffer
        }
    }
    return num;
}

int main() {
    int Array_A[10];
    int Array_B[9]; // Array_B have one less element than Array_A 
    char choice; // Variable for the do-while loop

    do {
        // Input 10 numbers into Array_A with validation
        printf("Enter 10 numbers for Array_A:\n");
        for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        Array_A[i] = inputValidation();
        }

        // Call function to compute sum of two succeeding elements and assign to Array_B
        ADD(Array_A, Array_B, 10);

        // Print Array_A
        printf("\nArray_A:\n");
        for (int i = 0; i < 10; i++) {
        printf("%d ", Array_A[i]);
        }

        printf("\n");

        // Print Array_B
        printf("\nArray_B:\n");
        for (int i = 0; i < 9; i++) {
        printf("%d ", Array_B[i]);
        }

        // Ask the user if they want to repeat the process 
        printf("\n\nDo you want to enter another set of numbers? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\n");

    printf("Thank you for using the program. Have a great day!\n");

    return 0;
}