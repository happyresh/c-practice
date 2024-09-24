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


    // Introduction and user instructions
    printf("Welcome to the Runner's Speed Calculator!\n");


    // Ask the user for their name
    printf("Please enter your name: ");
    scanf("%s", NAME_OF_RUNNER);


    printf("Hello, %s! I hope you're doing well and staying active.\n", NAME_OF_RUNNER);


    // Ask the user to input their race time
    printf("Please enter your race time in minutes and seconds:\n");
    printf("Minutes: ");
    scanf("%d", &MINUTES);
    printf("Seconds: ");
    scanf("%f", &SECONDS);


    // Formula of the program
    TOTAL_SECONDS = (MINUTES * 60) + SECONDS;  // Convert the time into seconds for calculations
    SPEED_FPS = FEET_IN_MILE / TOTAL_SECONDS; // Speed in feet per second
    SPEED_MPS = METERS_IN_MILE / TOTAL_SECONDS; // Shortcut formula for speed in meters per second


    // Output of the program
    printf("\n%s, here are your speed statistics:\n", NAME_OF_RUNNER);
    printf("Your speed in feet per second is: %.2f ft/s\n", SPEED_FPS);
    printf("Your speed in meters per second is: %.2f m/s\n", SPEED_MPS);


    // Thank you and encouragement
    printf("Thank you for using our Super-Friendly Runner's Speed Calculator! Keep up the great work and stay active.\n");


    return 0;
}



