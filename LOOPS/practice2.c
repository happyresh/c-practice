#include <stdio.h>

int main() {
    int i, n, sum;

    printf("Enter any positive numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }
        printf("\nThe sum of the natural numbers up to %d is %d", n, sum);
return 0;
}