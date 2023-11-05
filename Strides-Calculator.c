#include <stdio.h>

int main(){
    // Constant for the program STRIDES CALCULATOR
    const float FEET_IN_MILE= 5280; // 1 mile = 5280 feet
    const float STRIDE_LENGTH_FEET= 2.5; // Arnie's stride is 2.5 feet (Assuming)

    // Variables for the program STRIDES CALCULATOR
    char USER[50]; 
    unsigned int FIRST_MINUTE_STRIDE, LAST_MINUTE_STRIDE;
    float AVERAGE_STRIDES, TOTAL_DISTANCE_MILES;

    //Greetings for the user of program
    printf("Enter your name: "); // Added features to make the program universal
    scanf("%s", USER);

    printf("Good day, %s! Welcome to the Strides Calculator.\n", USER);

    // Ask the user to input the first minute and last minute strides
    printf("Enter the number of strides you made in the first minute: ");
    scanf("%d", &FIRST_MINUTE_STRIDE);

    printf("Enter the number of strides you made in the last minute: ");
    scanf("%d", &LAST_MINUTE_STRIDE);

    // Formula for the average of strides taken
    AVERAGE_STRIDES= (FIRST_MINUTE_STRIDE + LAST_MINUTE_STRIDE)/2.0;

    // Formula to convert the total distance in feet to miles 
    TOTAL_DISTANCE_MILES= (AVERAGE_STRIDES*STRIDE_LENGTH_FEET)/ FEET_IN_MILE;

    // Output for the program STRIDES CALCULATOR
    printf("The total distance jogged in miles is %.6f. Great Job!", TOTAL_DISTANCE_MILES);

return 0;    
}