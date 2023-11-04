#include <stdio.h>

int main(){
    //Initialization of the program convert measurement
    float FEET, INCHES, CENTIMETERS, METERS;

    //Ask the user for the measurement in feet
    printf("Enter the measurement in feet: ");
    scanf("%f", &FEET);

    //Conversions 
    INCHES = FEET * 12; // 1 foot = 12 inches
    CENTIMETERS = INCHES * 2.54; // 1 inch = 2.54 cm
    METERS = CENTIMETERS / 100; // 1 meter = 100 cm

    // Output of the program convert measurement
    printf("%.2f feet is equivalent to:\n", FEET);
    printf("%.2f inches\n", INCHES);
    printf("%.2f centimeters\n", CENTIMETERS);
    printf("%.4f meters\n", METERS);

return 0;
}