#include <stdio.h>

int main() {
    int repeat;  // Variable to store user's choice to repeat
do 
{
    // Variables for the weights of the first and second luggage
    float first_weight, second_weight;

    // Constants for luggage weight limits and charges
    const int maximumWeight = 35;
    const int luggageCharge = 250;
    const int excessCharge = 150; 
    const int refund = 25;

    // Input for the weight of the first luggage
    printf("Enter the weight of your first luggage in kilos: ");
    scanf("%f", &first_weight);

    // Input for the weight of the second luggage
    printf("Enter the weight of your second luggage in kilos: ");
    scanf("%f", &second_weight);

    // Calculation for charges or refund for the first luggage
    int charge1, refund1;
    if (first_weight > maximumWeight)
    {
        charge1 = luggageCharge + (first_weight - maximumWeight) * excessCharge;
        refund1 = 0; // No refund for excess weight
    }
    else if (first_weight >= 5 && first_weight <= 10)
    {
        charge1 = luggageCharge;
        refund1 = refund;
    }
    else
    {
        charge1 = luggageCharge;
        refund1 = 0;
    }
    
    // Calculation for charges or refund for the second luggage
    int charge2, refund2;
    if (second_weight > maximumWeight)
    {
        charge2 = luggageCharge + (second_weight - maximumWeight) * excessCharge;
        refund2 = 0; // No refund for excess weight
    }
    else if (second_weight >= 5 && second_weight <= 10)
    {
        charge2 = luggageCharge;
        refund2 = refund;
    }
    else
    {
        charge2 = luggageCharge;
        refund2 = 0;
    }

    // Calculation for the total cost of luggage
    int totalCost;
    totalCost = charge1 + charge2 - refund1 - refund2;

    // Display the results for the first luggage
    printf("\nThe weight of the first luggage is %.2f kilos.\n", first_weight);
    printf("The charge for the first luggage is Php. %d\n", charge1);
    printf("The refund for the first luggage is Php. %d\n", refund1);

    // Display the results for the second luggage
    printf("\nThe weight of the second luggage is %.2f kilos.\n", second_weight);
    printf("The charge for the second luggage is Php. %d\n", charge2);
    printf("The refund for the second luggage is Php. %d\n", refund2);

    // Display the total cost/charge/refund
    printf("\nThe total cost/charge/refund: Php. %d\n", totalCost);

    // Ask the user if they want to repeat the calculation
    printf("\n\nDo you want to calculate again? (PRESS 1 = YES, PRESS 0 = NO) ");
    scanf(" %d", &repeat);

} while (repeat == 1);
    printf("Thank you for using the luggage calculator :)\n");

return 0;
}