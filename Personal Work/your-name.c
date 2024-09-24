#include <stdio.h>

int main(){
    //C program for printing your name 
    char name[40];
    
    printf("Enter your name:");
    scanf("%s", name);

    printf("Your name is %s", name);
    
    return 0;
}