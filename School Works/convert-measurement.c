#include <stdio.h>


int main() {
    // Initialization of the program to convert measurements
    float FEET, INCHES, CENTIMETERS, METERS;


    // Introduction and user instructions
    printf("Welcome to the Measurement Converter!\n");
    printf("This handy tool converts feet into inches, centimeters, and meters.\n");


    // Ask the user for the measurement in feet
    printf("Please enter the measurement in feet: ");
    scanf("%f", &FEET);


    // Conversions
    INCHES = FEET * 12; // 1 foot = 12 inches
    CENTIMETERS = INCHES * 2.54; // 1 inch = 2.54 cm
    METERS = CENTIMETERS / 100; // 1 meter = 100 cm


    // Output of the program to convert measurements
    printf("\n%.2f feet is equivalent to:\n", FEET);
    printf("%.2f inches\n", INCHES);
    printf("%.2f centimeters\n", CENTIMETERS);
    printf("%.4f meters\n", METERS);


    // Thank you message
    printf("\nThank you for using our Measurement Converter! Have a wonderful day.\n");


    return 0;
}
