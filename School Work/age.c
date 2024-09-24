#include <stdio.h>      

int main() {
    // Initialization of the program
	int age, answer;
 do
{
    age = 0;
    // Input for the program
    printf("Please enter your age: ");
	scanf("%d", &age);

    // Checking eligibility using if-else statement
	if (age <= 12) {
        // If the age is less than 12, that means you are a child
        printf("You are a child.");
    } else if (age >= 13 && age <= 19) {
        // If the age is greater than or equal to 13 and age is less than or equal to 19, you are a teenager
        printf("You are a teenager.");
    } else  {
        printf("You are an adult.");
    } 

    printf("\nIf you wish to try again: 1 = YES 0 = NO: ");
    scanf("%d", &answer);
} while (answer==1);
printf("Thank you for using the program :)");

return 0;
}