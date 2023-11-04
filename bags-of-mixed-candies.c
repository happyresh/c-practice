#include <stdio.h>

int main(){

    //Initialization of the program
    float CANDY_WEIGHT_A, CANDY_WEIGHT_B, CANDY_WEIGHT_C, CANDY_WEIGHT_D, TOTAL_COST;
    
    //Input for the kilogram amount for Candy A, B, C, and D
    printf("\nPlease enter the kilogram amount for Candy A: ");
    scanf("%f", &CANDY_WEIGHT_A);

    printf("\nPlease enter the kilogram amount for Candy B: ");
    scanf("%f", &CANDY_WEIGHT_B);

    printf("\nPlease enter the kilogram amount for Candy C: ");
    scanf("%f", &CANDY_WEIGHT_C);

    printf("\nPlease enter the kilogram amount for Candy D: ");
    scanf("%f", &CANDY_WEIGHT_D);

    //Formula for the total cost of the bags of mixed candies
    TOTAL_COST=(CANDY_WEIGHT_A*35)+(CANDY_WEIGHT_B*45)+(CANDY_WEIGHT_C*56)+(CANDY_WEIGHT_D*57.50);

    //Output for the total cost of the bags of mixed candies
    printf("\nThe total cost of the bag of mixed candies is Php %.2f", TOTAL_COST);

return 0;
}