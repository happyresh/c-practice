#include <stdio.h> 



int multiply (int num1, int num2);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("%d times %d is equal to %d", num1, num2, multiply(num1, num2));

}

int multiply (int num1, int num2) {
    return (num1 * num2);
}