#include <stdio.h>

int main() {
    // Initialization of the program
    float decibel;

    // Welcome greeting for the user
    printf("Welcome to the decibel measurement :)\n");

    // Input for the program
    printf("Enter the decibel measurement: ");
    scanf("%f", &decibel);

    // If-else statement for the program
    if (decibel <= 50) {
        printf("Loudness type: Quiet\n");
    } else if (decibel <= 70) {
        printf("Loudness type: Intrusive\n");
    } else if (decibel <= 90) {
        printf("Loudness type: Annoying\n");
    } else if (decibel <= 110) {
        printf("Loudness type: Very Annoying\n");
    } else {
        printf("Loudness type: Uncomfortable\n");
    }

    // Thank you for the user of the program
    printf("Thank you for using our decibel measurement :)\n");
    return 0;
}
