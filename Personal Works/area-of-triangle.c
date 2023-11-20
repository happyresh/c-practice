#include <stdio.h>

int main() {
    // Initialization for base, height, and the area of the triangle
    float BASE, HEIGHT, AREA_OF_TRIANGLE;

    // Welcome greetings for the user
    printf("Welcome to the calculator for area of the triangle \n");

    // Input for the base and height of a triangle
    printf("Please enter the base of a triangle: ");
    scanf("%f", &BASE);

    printf("Please enter the height of a triangle: ");
    scanf("%f", &HEIGHT);

    // Formula for the area of a triangle
    AREA_OF_TRIANGLE = 0.5*BASE*HEIGHT;

    // Output for the area of the triangle
    printf("The area of a triangle is %.2f \n", AREA_OF_TRIANGLE);

    //
    printf("Thank you for using our calculator for area of triangle");

    return 0;
}
