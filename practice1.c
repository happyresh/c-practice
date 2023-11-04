#include <stdio.h>

//Simple Calculator of Happyresh
int main() {
    int num1, num2, result;
    char operators;

    //Select your operators
    printf("Select any of the operators: +, -, *, / \n");
    scanf("%c", &operators);

    //Input the first number
    printf("Input your first number: ");
    scanf("%d", &num1);
    
    printf("\n");

    //Input the second number
    printf("Input your second number: ");
    scanf("%d", &num2);

    switch (operators){
         case '+': result=num1+num2;
         printf("The sum of two numbers is: %d", result);
         break;

         case '-': result=num1-num2;
         printf("The difference of two numbers is: %d", result);
         break;

         case '*': result=num1*num2;
         printf("The product of two numbers is: %d", result);
         break;

         case '/': result=num1/num2;
         printf("The quotient of two numbers is: %d", result);
         break;

    }
    return 0;
}