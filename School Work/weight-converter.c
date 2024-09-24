#include <stdio.h>

int main(){
    //Initialization of the program
    float EARTH_WEIGHT, MARS_WEIGHT, JUPITER_WEIGHT;

    //Input for the weight in pounds on Earth
    printf("Please enter your weight in pounds on Earth that needs to be converted: ");
    scanf("%f", &EARTH_WEIGHT);

    //Formula to convert the weight in pounds on Earth to Mars and Jupiter
    MARS_WEIGHT= EARTH_WEIGHT*0.38;
    JUPITER_WEIGHT= EARTH_WEIGHT*2.64;

    //Output for the weight converter
    printf("\nYour weight on Mars is %.2f", MARS_WEIGHT);
    printf("\nYour weight on Jupiter is %.2f", JUPITER_WEIGHT);

return 0;
}