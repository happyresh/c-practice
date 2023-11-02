#include <stdio.h>

int main() {
    // Initialization of the program for Circle's area and Circumference
    const float PI = 3.14;
    float RADIUS, AREA, CIRCUMFERENCE;
    
    // Input for the radius 
    printf("Enter the radius of the circle: ");
    scanf("%f", &RADIUS);
    
    // Formula for the area and circumference 
    AREA = PI*RADIUS*RADIUS;
    CIRCUMFERENCE = 2*PI*RADIUS;
    
    // Output for the area and circumference of the circle
    printf("The area of the circle is %.2f\n", AREA);
    printf("The circumference of the circle is %.2f\n", CIRCUMFERENCE);
    
    return 0;
}
