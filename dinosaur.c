#include <stdio.h>

int main() {
    // Declarations for the two dinosaurs and their respective lifespans
    char ERIC_THE_DINOSAUR[50];
    char ALFRED_THE_DINOSAUR[50];
    float ERIC_YEARS_LIVED, ALFRED_YEARS_LIVED;
    
    // Declarations for calculated lifespans in different units
    float ERIC_MONTHS_LIVED, ERIC_DAYS_LIVED, ERIC_SECONDS_LIVED;
    float ALFRED_MONTHS_LIVED, ALFRED_DAYS_LIVED, ALFRED_SECONDS_LIVED;
    
    // Input for the first dinosaur's name and years lived
    printf("Enter the name of the first dinosaur: ");
    scanf("%s", ERIC_THE_DINOSAUR);
    
    printf("Enter the number of years %s lived: ", ERIC_THE_DINOSAUR);
    scanf("%f", &ERIC_YEARS_LIVED);
    
    // Input for the second dinosaur's name and years lived
    printf("Enter the name of the second dinosaur: ");
    scanf("%s", ALFRED_THE_DINOSAUR);
    
    printf("Enter the number of years %s lived: ", ALFRED_THE_DINOSAUR);
    scanf("%f", &ALFRED_YEARS_LIVED);
    
    // Calculations for lifespans in different units
    ERIC_MONTHS_LIVED = ERIC_YEARS_LIVED * 12;
    ERIC_DAYS_LIVED = ERIC_YEARS_LIVED * 365.25;
    ERIC_SECONDS_LIVED = ERIC_YEARS_LIVED * 365 * 24 * 60 * 60;
    
    ALFRED_MONTHS_LIVED = ALFRED_YEARS_LIVED * 12;
    ALFRED_DAYS_LIVED = ALFRED_YEARS_LIVED * 365.25;
    ALFRED_SECONDS_LIVED = ALFRED_YEARS_LIVED * 365.25 * 24 * 60 * 60;
    
    // Output the calculated lifespans of the dinosaur
    printf("\nThe number of months that %s lived is %.2f months, and for %s is %.2f months\n", ERIC_THE_DINOSAUR, ERIC_MONTHS_LIVED, ALFRED_THE_DINOSAUR, ALFRED_MONTHS_LIVED);
    printf("The number of days that %s lived is %.2f days, and for %s is %.2f days\n", ERIC_THE_DINOSAUR, ERIC_DAYS_LIVED, ALFRED_THE_DINOSAUR, ALFRED_DAYS_LIVED);
    printf("The number of seconds that %s lived is %.2f seconds, and for %s is %.2f seconds\n", ERIC_THE_DINOSAUR, ERIC_SECONDS_LIVED, ALFRED_THE_DINOSAUR, ALFRED_SECONDS_LIVED);
    
    return 0;
}
