#include <stdio.h>

int main() {
    // Initialization of the Program Jedi Knight Academy
    int HEIGHT, AGE, CITIZENSHIP, RECOMMENDEE;

    // Greetings for the user of program
    printf("Hey there! Welcome to the Jedi Knight Academy Enrollment Program.\n");
    printf("Let's get started with a few questions to see if you have what it takes!\n");

    // Input for the program Jedi Knight Academy
    printf("Please enter your height in centimers: ");
    scanf("%d", &HEIGHT);

    printf("Please enter your age: ");
    scanf("%d", &AGE);

    printf("Please enter your citizenship code (1 for citizen, 0 for non-citizen): ");
    scanf("%d", &CITIZENSHIP);

    printf("Please enter your recommendee's code (1 for recommended, 0 for not recommended): ");
    scanf("%d", &RECOMMENDEE);

    // Checking the eligibility using if-else statement
    if (RECOMMENDEE == 1){
        // The applicant is automatically accepted if recommended by Jedi Master Obi Wan
        printf("Congratulations! You are now accepted in the Jedi Knight Academy.\n");
    } else if (HEIGHT >= 200 && AGE >= 21 && AGE <= 25 && CITIZENSHIP == 1) {
        // Other criteria for enter the Jedi Knight Academy
        printf("Congratulations! You are accepted to the Jedi Knight Academy.\n");
    } else {
        printf("We're sorry, but it seems you do not meet the criteria to be accepted into the Jedi Knight Academy.\n");
    }
    
return 0;
}