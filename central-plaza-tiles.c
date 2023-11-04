/* In the heart of the capital city of Berland, Central Plaza has a rectangular shape with dimensions x × y meters. 
In celebration of the city's anniversary, a decision was made to cover Central Plaza with square granite tiles,
each measuring z × z meters. What is the minimum number of tiles required to fully cover Central Plaza?
You are allowed to extend the tiling beyond the plaza's boundaries, but the entire area must be covered. 
It's not permissible to break or cut the tiles, and the sides of the tiles should be aligned with the sides of Central Plaza.

Input Format
The input line only contains three positive integer numbers: x, y and z.

Constraints
(1 ≤ x, y, z ≤ 10^9)

Output Format
Write the needed number of tiles.
Sample Input 0
5 5 3
Sample Output 0
4   

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x, y, z;
    int tiles_x, tiles_y, total_tiles;

    // Read input values
    scanf("%d %d %d", &x, &y, &z);

    // Calculate the number of tiles required for both dimensions
    tiles_x = (x + z - 1) / z;
    tiles_y = (y + z - 1) / z;

    // Calculate total number of tiles required
    total_tiles = tiles_x * tiles_y;

    // Output the result
    printf("%d\n", total_tiles);

    return 0;
}