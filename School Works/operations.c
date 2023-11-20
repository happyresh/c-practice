#include <stdio.h>
#include <math.h>

    int main(){

    //Initialization of the program
    float A, B, C;
    float SUM, DIFFERENCE, PRODUCT, QUOTIENTS, SUM_OF_SQUARES, EXPONENT;

    //Input the corresponding numbers for A, B, C
    printf("Please enter the first number: ");
    scanf("%f", &A);

    printf("Please enter the second number: ");
    scanf("%f", &B);

    printf("Please enter the third number: ");
    scanf("%f", &C);

    //formula for the SUM, DIFFERENCE, PRODUCT, QUOTIENTS, SUM_OF_SQUARES
    SUM= A+B+C;
    DIFFERENCE= A-B-C;
    PRODUCT= A*B*C;
    QUOTIENTS= A/B/C;
    SUM_OF_SQUARES= pow(A, 2)+pow(B, 2)+pow(C, 2);

    //Output for the SUM, DIFFERENCE, PRODUCT, QUOTIENTS, SUM_OF_SQUARES
    printf("The sum of three numbers is: %.2lf \n", SUM);
    printf("The difference of three numbers is: %.2lf \n", DIFFERENCE);
    printf("The product of three numbers is: %.2lf \n", PRODUCT);
    printf("The quotients of three numbers is: %.2lf \n", QUOTIENTS);
    printf("The sum of the squares of three numbers is: %.2lf \n", SUM_OF_SQUARES);

    return 0;
}