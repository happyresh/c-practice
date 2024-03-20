#include <stdio.h>

const int LIMIT = 50;          // Line 1
int AddEm(int x, int y);       // Line 2

int main() {                   // Line 3
    int x = 42,                 // Line 4
        y = 35;                 // Line 5
    int Sum;                    // Line 6
    Sum = AddEm(x, y);          // Line 7

    printf("Sum: %d\n", Sum);   // Additional line for output
    return 0;                   // Line 8
}                              // Line 9

int AddEm(int x, int y) {       // Line 10
    int Total;                  // Line 11
    Total = x + y;              // Line 12
    if (Total > LIMIT)          // Line 13
        Total = 0;              // Line 14
    return Total;               // Line 15
}                               // Line 16

