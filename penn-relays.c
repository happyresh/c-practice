#include <stdio.h>

int main() {
    // Constants for conversions
    const int FEET_IN_MILE = 5280; // 1 mile = 5280 feet
    const float METERS_IN_MILE = 1609.34; // 1 mile = 1609.34 meters

    // Variables for the program 
    char NAME_OF_RUNNER[50];
    int MINUTES;
    float SECONDS;
    float TOTAL_SECONDS, SPEED_FPS, SPEED_MPS;

    // Input for the program 
    printf("Welcome to the Runner's Speed Calculator!\n");

    printf("Please enter your name: "); // Added feature to the program
    scanf("%s", NAME_OF_RUNNER);

    printf("Hello, %s. I hope you're having a great day!\n", NAME_OF_RUNNER);

    printf("Please enter your race time in minutes and seconds:\n");
    printf("Minutes: ");
    scanf("%d", &MINUTES);
    printf("Seconds: ");
    scanf("%f", &SECONDS);

    // Formula of the program
    TOTAL_SECONDS = (MINUTES * 60) + SECONDS;  // Convert the time into seconds for calculations
    SPEED_FPS = FEET_IN_MILE / TOTAL_SECONDS; // Speed in feet per second 
    SPEED_MPS = METERS_IN_MILE / TOTAL_SECONDS; // Speed in meters per second

    // Output of the program 
    printf("\nHello, %s. Your speed statistics are as follows:\n", NAME_OF_RUNNER);
    printf("Your speed in feet per second is: %.2f\n", SPEED_FPS);
    printf("Your speed in meters per second is: %.2f\n", SPEED_MPS);

    return 0;
}
