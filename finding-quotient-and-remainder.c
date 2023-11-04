#include <stdio.h>

int main() {
    int num1, num2, quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &num1);

    printf("Enter the divisor: ");
    scanf("%d", &num2);

    //formula for quotient
    quotient = num1/num2;
    //formula for remainder
    remainder = num1%num2;

    printf("The quotient is: %d \n", quotient);
    printf("The remainder is: %d", remainder);

    return 0;
}