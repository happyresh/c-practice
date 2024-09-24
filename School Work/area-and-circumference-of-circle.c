#include <stdio.h>

int main() {
    // Initialization of the program for Circle's area and Circumference
    const float PI = 3.14;
    float RADIUS, AREA, CIRCUMFERENCE;

    //Greetings for the user of program
    printf("Welcome to the calculator of Circle's area and Circumference\n");
    
    // Input for the radius 
    printf("Please enter the radius of the circle: ");
    scanf("%f", &RADIUS);
    
    // Formula for the area and circumference 
    AREA = PI*RADIUS*RADIUS;
    CIRCUMFERENCE = 2*PI*RADIUS;
    
    // Output for the area and circumference of the circle
    printf("The area of the circle is %.2f\n", AREA);
    printf("The circumference of the circle is %.2f\n", CIRCUMFERENCE);
    printf("Thank you for using our calculator for Circle's area and Circumference\n");
    
    return 0;
}
