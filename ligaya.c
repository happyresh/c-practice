#include <stdio.h>

int main(){
    char NAME_OF_LOVER[50];

    printf("Please enter your name: ");
    scanf("%99[^\n]", NAME_OF_LOVER);

    if (strcmp(NAME_OF_LOVER,"Kristine Joy Sarzuelo")==0)
    {
        printf("You are Recio's lover mwehehe");
    }
    else
    {
        printf("You are not Recio's lover mwehehe");
    }
    
return 0;
}