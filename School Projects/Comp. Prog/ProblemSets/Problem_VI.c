// A simple Calculator in C!
#include <stdio.h>

int main() {

    char operator, letterVal;
    double num1, num2, formula;

    printf("A calculator in C!\n");
    printf(" + = Addition");
    printf("\n - = Subtraction");
    printf("\n * = Multiplication");
    printf("\n / = Division\n");
    
    printf("\nEnter Operator: ");
    scanf("%c", &operator);

    if(operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Invalid Operator!");

        return 0;
    }

    printf("\nEnter num1: ");
    scanf("%lf", &num1);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    printf("Enter num2: ");
    scanf("%lf", &num2);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");
        return 0;
    }

    if(operator == '+') {

        formula = (num1 + num2);
        printf("\nRaw result: %.0lf + %.0lf = %.0lf", num1, num2, formula);
    }
    else if(operator == '-') {

        formula = (num1 - num2);
        printf("\nRaw result: %.0lf - %.0lf = %.0lf", num1, num2, formula);
    }
    else if(operator == '*') {
        formula = (num1 * num2);
        printf("\nRaw result: %.0lf x %.0lf = %.0lf", num1, num2, formula);
    }
    else if(operator == '/') {
        
        formula = (num1 / num2);
        printf("\nRaw result: %.0lf / %.0lf = %.2lf", num1, num2, formula);
    }

    return 0;
}