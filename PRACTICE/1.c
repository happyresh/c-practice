#include <stdio.h>

void trace1(int x, int *y) 
{
    x = 5; 
    *y = 2;
    printf("%2d %2d\n", x, *y);
}

int main() 
{
    int x, y;

    x = y = 3;
    printf("%2d %2d\n", x, y);
    trace1(x, &y);
    printf("%2d %2d\n", x, y);

    return 0;
}
