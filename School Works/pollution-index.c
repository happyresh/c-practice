#include <stdio.h>

int main() {
    // Initialization of the program Pollution Index
    int pollutionIndex;

    // Input for the program Pollution Index
    printf("Please the enter the Pollution Index: ");
    scanf("%d", &pollutionIndex);

    // Checking the pollution index using if-else statement
    if (pollutionIndex < 35) {
        printf("The pollution is classified as PLEASANT.\n");
    } else if (pollutionIndex >= 35 && pollutionIndex <= 60) {
        printf("The pollution is classified as UNPLEASANT.\n");
    } else {
        printf("The pollution is classified as HAZARDOUS.\n");
    }
    
return 0;
}