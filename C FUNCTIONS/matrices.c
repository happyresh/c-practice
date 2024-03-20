#include <stdio.h>

int main() {
    // Define and initialize ArrayA and ArrayB
    int ArrayA[3] = {1, 2, 3};
    int ArrayB[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    
    // Define and initialize ArrayC
    int ArrayC[3] = {0}; // Initialize all elements to 0
    
    // Perform matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ArrayC[i] += ArrayA[j] * ArrayB[j][i];
        }
    }
    
    // Print ArrayA
    printf("ArrayA:\n");
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
    
    return 0;
}
