#include <stdio.h>

int main(){
    // Constant for the program STRIDES CALCULATOR
    const float FEET_IN_MILE= 5280;
    const float STRIDE_LENGTH_FEET= 2.5;

    // Variables for the program STRIDES CALCULATOR
    unsigned int FIRST_MINUTE_STRIDE, LAST_MINUTE_STRIDE, TOTAL_MINUTES_JOGGED;
    float AVERAGE_STRIDES, AVERAGE_DISTANCE_PER_MINUTE, TOTAL_DISTANCE_FEET, TOTAL_DISTANCE_MILES;

    // Ask the user to input the first minute and last minute strides
    printf("Enter the number of strides in the first minute: ");
    scanf("%d", &FIRST_MINUTE_STRIDE);

    printf("Enter the number of strides in the last minute: ");
    scanf("%d", &LAST_MINUTE_STRIDE);

    // Ask the user to input the total minutes jogged 
    printf("Enter the time for total minutes jogged: ");
    scanf("%d", &TOTAL_MINUTES_JOGGED);

    // Formula for the average of strides taken
    AVERAGE_STRIDES= (FIRST_MINUTE_STRIDE+LAST_MINUTE_STRIDE)/2.0;

    // Formula for the average distance jogged in feet
    AVERAGE_DISTANCE_PER_MINUTE= AVERAGE_STRIDES * STRIDE_LENGTH_FEET;

    // Formula for the total distance in feet
    TOTAL_DISTANCE_FEET= AVERAGE_DISTANCE_PER_MINUTE * TOTAL_MINUTES_JOGGED;

    // Formula to convert the total distance in feet to miles 
    TOTAL_DISTANCE_MILES= TOTAL_DISTANCE_FEET / FEET_IN_MILE;

    // Output for the program STRIDES CALCULATOR
    printf("The total distance jogged in miles is %.2f", TOTAL_DISTANCE_MILES);

return 0;    
}