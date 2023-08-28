#include <stdio.h>

int main () {
   double num1, num2, result;
   char operator;

 
    printf("enter your first number: ");
    scanf("%lf", &num1 );

    printf("enter an operator ( +, -, *, /): ");
    scanf("%c", &operator);

    printf("enter your second number");
    scanf("%lf", &num2 );

    printf("results");

    

    switch (operator) {
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;
        
        case '/':
        result = num1 / num2;
        if (num2 != 0) {
            result = num1 / num2;
       }else{
        printf("error cannot divided by zero \n");
        return 0;
       }
       break;
       default:
       printf("invalid operator \n");
       return 0;
        }
    printf("Result: %lf/n", result);
    return 0;
        
    
}