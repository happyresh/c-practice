#include <stdio.h>

int main(){
    //code starts here
    double num1, num2, product;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    //formula for multiplication
    product = num1 * num2;

    printf("The product of two numbers is: %.2lf", product);
}