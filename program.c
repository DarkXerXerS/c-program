#include <stdio.h>
#include <math.h>
#include <ctype.h>

// OUTPUT & PRINTF FUNCTION
int main()
{

    char operator;
    double num1;
    double num2;
    double result;

    printf("\n Enter an operator (+ - * / )");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("ENter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;

          case '-':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;
        
          case '*':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;
        
          case '/':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;
        

        default:
        printf("%c is not valid", operator);
        break;
    }

    return 0;
}