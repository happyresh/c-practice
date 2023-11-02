#include <stdio.h>

int main() {
    // Initialization of the program
    float AREA, BASE, HEIGHT;

    // Input the corresponding numbers for the height
    printf("Please enter the height of the rectangle: ");
    scanf("%f", &HEIGHT);

    // Input the corresponding number for the base
    printf("Please enter the base of the rectangle: ");
    scanf("%f", &BASE);

    // Formula for the AREA of the rectangle
    AREA = BASE * HEIGHT;

    // Output for the AREA of the rectangle
    printf("The area of the rectangle is: %.2f\n", AREA);

    return 0;
}
