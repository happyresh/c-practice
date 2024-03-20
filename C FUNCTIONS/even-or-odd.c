#include <stdio.h>

int EvenOdd (int num) {
    // If-else statement to determine if it is even or odd
    if (num % 2 == 0)
    {
        printf("The number %d is even.", num);
    }
    else
    {
        printf("The number %d is odd.", num);
    } 
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    EvenOdd(num);
}