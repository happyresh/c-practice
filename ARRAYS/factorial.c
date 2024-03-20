#include <stdio.h>

int main() {
    int n;
    printf("Input non-negative number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    if (n == 0) {
        printf("Factorial of 0 = 1\n");
        return 0;
    }

    // Initialize factorial to 1
    unsigned long long factorial = 1;

    // Calculate factorial
    printf("Process: ");
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        printf("%d", i);
        if (i < n) {
            printf(" * ");
        }
    }

    // Create and print the array (assuming n > 0)
    printf("\nArray: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d", i);
        if (i < n) {
            printf(", ");
        }
    }
    
    // Output factorial
    printf("\nFactorial of %d = %llu\n", n, factorial);

    return 0;
}
