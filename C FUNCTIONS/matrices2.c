#include <stdio.h>

int main() {
    char repeat = 'y';
    
    while (repeat == 'y' || repeat == 'Y') {
        // Define and initialize ArrayA and ArrayB
        int ArrayA[3];
        int ArrayB[3][3];
        
        // Input values for ArrayA
        printf("Enter values for ArrayA (3 integers):\n");
        for (int i = 0; i < 3; i++) {
            scanf("%d", &ArrayA[i]);
        }
        
        // Input values for ArrayB
        printf("Enter values for ArrayB (3x3 integers):\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &ArrayB[i][j]);
            }
        }
        
        // Define and initialize ArrayC
        int ArrayC[3] = {0}; // Initialize all elements to 0
        
        // Perform matrix multiplication
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                ArrayC[i] += ArrayA[j] * ArrayB[j][i];
            }
        }
        
        // Print ArrayA
        printf("\nArrayA:\n");
        for (int i = 0; i < 3; i++) {
            printf("%d ", ArrayA[i]);
        }
        printf("\n");
        
        // Print ArrayB
        printf("\nArrayB:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", ArrayB[i][j]);
            }
            printf("\n");
        }
        
        // Print ArrayC
        printf("\nArrayC:\n");
        for (int i = 0; i < 3; i++) {
            printf("%d ", ArrayC[i]);
        }
        printf("\n");
        
        // Ask if the user wants to repeat the process
        printf("\nDo you want to repeat the process? (y/n): ");
        scanf(" %c", &repeat);
    }
    
    printf("Program ended.\n");
    
    return 0;
}
