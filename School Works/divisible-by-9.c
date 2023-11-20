#include <stdio.h>

int main() {
    //Initialization of the program Divisibilty by 9 Checker
    int NUM=0;

    // Welcome greetings for the user of program Divisibilty by 9 Checker
    printf("Hello, user! Welcome to the Divisibility by 9 Checker.\n");

    // Input for the program Divisibility by 9 Checker
    printf("Enter any non-negative integer number: ");
    scanf("%d", &NUM);

    // Checking eligibility using if-else statement
    if (NUM % 9 == 0) {
        printf("The number you entered is divisible by 9.\n");
    } else {
        printf("The number you entered is not non-divisible by 9.\n");
    }
    
return 0;
}