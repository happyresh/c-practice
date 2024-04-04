/*Recio, Eliniel V. | BSIT 1-2D
This code will print the output in a side-by-side format or column format */


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
            printf("Invalid input. Please enter an integer: "); // If the input is not an integer, the user can have a chance to input an integer

            while (getchar() != '\n');  // Clear input buffer
        }
    }
    return num;
}

int main() {
    int Array_A[10];
    int Array_B[9]; // Array_B has one less element than Array_A 
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

        // Print both arrays in a column format or side-by-side to make it look clean
        printf("\nArray_A\t\tArray_B\n");
        for (int i = 0; i < 9; i++) {
            printf("%d\t\t%d\n", Array_A[i], Array_B[i]);
        }
        printf("%d\n\n", Array_A[9]); // Print the last element of Array_A separately 

        // Ask the user if they want to repeat the process 
        printf("Do you want to enter another set of numbers? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the program. Have a great day!\n");

    return 0;
}