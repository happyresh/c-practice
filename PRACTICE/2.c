#include <stdio.h>

void trace(int x, int *y, int z) {
    x = 1; 
    *y = 2;
    z = 4;
    printf("%2d %2d %2d\n", x, *y, z);
}

int main() {
    int x = 1, y = 3, z = 4;
 

    printf("%2d %2d %2d\n", x, y, z);

    trace(y, &x, z);
    printf("%2d %2d %2d\n", x, y, z);

    trace(x, &z, y);
    printf("%2d %2d %2d\n", x, y, z);

    trace(z, &y, x);
    printf("%2d %2d %2d\n", x, y, z);

    return 0;
}
