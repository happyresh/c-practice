#include <stdio.h>

int main() {
    // Initialization of the program
    int array_GIFTS[12];
    int DAYS = 12, TOTAL_GIFTS = 0;

    printf("DAY\tDAY GIFT\tTOTAL GIFTS\n");

    // For loop for the days
    for (int i = 0; i < DAYS; i++) {
        // Calculate the number of gifts on each day and store in the array
        array_GIFTS[i] = (i + 1) * (i + 2) / 2;

        // Calculate total gifts
        TOTAL_GIFTS += array_GIFTS[i];

        // Display the results
        printf("%d\t%d\t\t%d\n", i + 1, array_GIFTS[i], TOTAL_GIFTS);
    }

    return 0;
}