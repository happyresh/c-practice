#include <stdio.h>

int main() {
    // Variables for the program Dinosaur
    char DINOSAUR_NAME[50];
    float MONTHS_LIVED, DAYS_LIVED, SECONDS_LIVED, YEARS_LIVED;
    
    // Input for the dinosaur's name and years lived
    printf("Enter the name of the dinosaur: ");
    scanf("%s", DINOSAUR_NAME);
    
    printf("Enter how many years the dinosaur lived: ");
    scanf("%f", &YEARS_LIVED);
    
    
    // Calculations for lifespans in different units
    MONTHS_LIVED = YEARS_LIVED * 12;
    DAYS_LIVED = YEARS_LIVED * 365.25;
    SECONDS_LIVED = YEARS_LIVED * 365 * 24 * 60 * 60;
    
    // Output the calculated lifespans of the dinosaur
    printf("\nThe number of months that %s lived is %.2f months\n", DINOSAUR_NAME, MONTHS_LIVED);
    printf("\nThe number of months that %s lived is %.2f months\n", DINOSAUR_NAME, DAYS_LIVED);
    printf("\nThe number of months that %s lived is %.2f months\n", DINOSAUR_NAME, SECONDS_LIVED);
    printf("\n--Thank you for using our calculator!--\n");
    return 0;
}