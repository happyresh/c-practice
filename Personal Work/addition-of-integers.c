#include <stdio.h>

int main(){
    //Adding two integers
    int num1, num2, sum;

    printf("Enter your first integer: ");
    scanf("%d", &num1);

    printf("Enter your second integer: ");
    scanf("%d", &num2);

    //formula for addition
    sum=num1+num2;

    printf("The sum of two integers is: %d", sum);

    return 0;

}