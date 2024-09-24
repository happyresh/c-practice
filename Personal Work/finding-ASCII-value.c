#include <stdio.h>

int main(){
    //code starts here
    char a;

    //%c displays the character
    //%d dispalys the value of ASCII code
    printf("Input a character: ");
    scanf("%c", &a);

    printf("The ASCII value of %c = %d", a, a);

    return 0;
}