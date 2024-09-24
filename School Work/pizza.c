#include <stdio.h>
#include <math.h>


int main() {
    int diameter;
    float price, area, price_per_sq_inch;

    printf("Enter the diameter of the pizza: ");
    scanf("%d", &diameter);

    // Calculate area of the pizza
    area = 3.14159* pow(diameter / 2.0, 2);

    printf("Enter the price of the pizza: ");
    scanf("%f", &price);

    // Calculate price per square inch
    price_per_sq_inch = price / area;

    printf("Area of the pizza: %.2f square inches\n", area);
    printf("Price per square inch: %.2f pesos/sq inch\n", price_per_sq_inch);

    // Determine the least expensive option
    if (diameter = 10) {
        if (price_per_sq_inch <= 0)
            printf("Invalid price or diameter entered.\n");
        else if (price_per_sq_inch <= 178 / area)
            printf("Domino's 10-inch pizza is the least expensive.\n");
        else if (price_per_sq_inch <= 259 / area)
            printf("Domino's 12-inch pizza is the least expensive.\n");
        else
            printf("Domino's 14-inch pizza is the least expensive.\n");
    } else if (diameter = 12) {
        if (price_per_sq_inch <= 259 / area)
            printf("Domino's 12-inch pizza is the least expensive.\n");
        else if (price_per_sq_inch <= 178 / area)
            printf("Domino's 10-inch pizza is the least expensive.\n");
        else if (price_per_sq_inch <= 314 / area)
            printf("Domino's 14-inch pizza is the least expensive.\n");
    } else if (diameter = 14) {
        if (price_per_sq_inch <= 314 / area)
            printf("Domino's 14-inch pizza is the least expensive.\n");
        else if (price_per_sq_inch <= 259 / area)
            printf("Domino's 12-inch pizza is the least expensive.\n");
        else if (price_per_sq_inch <= 178 / area)
            printf("Domino's 10-inch pizza is the least expensive.\n");
    } else {
        printf("Invalid diameter entered.\n");
    }

    return 0;
}
