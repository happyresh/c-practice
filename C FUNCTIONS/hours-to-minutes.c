#include <stdio.h>

int compute (int hr){
    int minutes = hr * 60;
    printf("%d hours is equal to %d minutes", hr, minutes);
}

int main() {

    int answer;

    do {
    
    int hours;

    printf("Welcome to hours to minutes converter!\n");

    printf("Please enter the number of hours: ");
    scanf("%d", &hours);

    compute(hours);

    printf("\nDo you want to try again? (PRESS 1= YES, PRESS 0= N) ");
    scanf("%d", &answer);
    } while (answer == 1);
}