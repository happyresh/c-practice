#include <stdio.h>

int main() {
    //Initialization of the program
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    //true if the number is divisible by 2
    if (num % 2==0) {
         printf("The number %d is even.", num);
    } else {
         printf("The number %d is odd.", num);
    }
   return 0;

}