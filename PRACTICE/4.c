#include <stdio.h>

// Function to calculate the square of a number using call by reference
void square(int *num) {
    *num = (*num) * (*num);
}

int main() {
    int number = 4;

    printf("Before squaring: %d\n", number);

    // Call square function by passing the address of the number
    square(&number);

    printf("After squaring: %d\n", number);

    return 0;
}
