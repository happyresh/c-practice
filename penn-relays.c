#include <stdio.h>

int main() {
    // Constants for conversions
    const int FEET_IN_MILE = 5280;
    const float METERS_IN_MILE = 1609.34;

    // Variables to store minutes, seconds, and total time in seconds
    int MINUTES;
    float SECONDS;
    float TOTAL_SECONDS, SPEED_FPS, SPEED_MPS;

    // Input for the program Penn Relays
    printf("Enter the race time for the runner to complete the race (minutes seconds): ");
    scanf("%d %f", &MINUTES, &SECONDS);

    // Formula of the program
    TOTAL_SECONDS = (MINUTES * 60) + SECONDS;
    SPEED_FPS = FEET_IN_MILE / TOTAL_SECONDS;
    SPEED_MPS = METERS_IN_MILE / TOTAL_SECONDS;

    // Ouput of the program Penn Relays
    printf("The runner's speed is: %.2f feet per second and %.2f meters per second\n", SPEED_FPS, SPEED_MPS);

    return 0;
}
