#include <stdio.h>
#include <math.h>

int main() {
    // Initialization of the program
    int SUM_OF_SQUARES, COUNTER, N, ANSWER;

    do // do-while loop to try again the program
    {
        SUM_OF_SQUARES = 0; // Initialize SUM_OF_SQUARES to avoid infinite loop in do-while loop

        // Input for the program 
        printf("Please enter any positive number: ");
        scanf("%d", &N);

        // for loop to get the sum of squares
        for (COUNTER = 1; COUNTER <= N; COUNTER++)
        {
            SUM_OF_SQUARES += pow(COUNTER, 2);
            printf("\n%d^2 = %.0f", COUNTER, pow(COUNTER, 2));
        }
        printf("\nThe sum of squares of %d is %d", N, SUM_OF_SQUARES);
        
        printf("\nIf you wish to try again: 1 = YES 0 = NO: ");
        scanf("%d", &ANSWER);
    } while (ANSWER == 1);

    printf("\nThank you for using the program :)\n");

    return 0;
}
