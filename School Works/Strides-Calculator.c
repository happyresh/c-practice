#include <stdio.h>


int main() {
    // Constants for the Strides Calculator
    const float FEET_IN_MILE = 5280; // 1 mile = 5280 feet
    const float STRIDE_LENGTH_FEET = 2.5; // Assuming Arnie's stride is 2.5 feet


    // Variables for the Strides Calculator
    char USER[50];
    int FIRST_MINUTE_STRIDE, LAST_MINUTE_STRIDE;
    float AVERAGE_STRIDES, TOTAL_DISTANCE_MILES;


    // Greetings for the user of the program
    printf("Welcome to the Strides Calculator!\n");
   
    // Ask the user for their name
    printf("Please enter your name: "); // Added features to make the program universal
    scanf("%s", USER);


    printf("Good day, %s! Let's calculate your strides.\n", USER);


    // Ask the user to input the number of strides in the first and last minutes
    printf("Enter the number of strides you made in the first minute: ");
    scanf("%d", &FIRST_MINUTE_STRIDE);


    printf("Enter the number of strides you made in the last minute: ");
    scanf("%d", &LAST_MINUTE_STRIDE);


    // Calculate the average number of strides
    AVERAGE_STRIDES = (FIRST_MINUTE_STRIDE + LAST_MINUTE_STRIDE) / 2.0;


    // Convert the total distance in feet to miles
    TOTAL_DISTANCE_MILES = (AVERAGE_STRIDES * STRIDE_LENGTH_FEET) / FEET_IN_MILE;


    // Output for the Strides Calculator
    printf("\n%s, your average number of strides is %.2f.\n", USER, AVERAGE_STRIDES);
    printf("The total distance you have jogged in miles is %.6f. Great Job!\n", TOTAL_DISTANCE_MILES);


    printf("Thank you for using our Strides Calculator. Keep up the good work!\n");


    return 0;
}
