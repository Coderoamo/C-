#include <stdio.h>

int main() {
    
    char Operator;
    double num1;
    double num2;
    double formula;

    printf("A calculator in C!\n");
    
    printf("Enter Operator: ");
    scanf("%c", &Operator);

    printf("\n");

    printf("Enter num1: ");
    scanf("%lf", &num1);

    printf("Enter num2: ");
    scanf("%lf", &num2);

    switch(Operator) {
        case '+' :
            formula = (num1 + num2);
            printf("\nRaw result: %.0lf + %.0lf = %.0lf", num1, num2, formula);
            break;
        case '-' :
            formula = (num1 - num2);
            printf("\nRaw result: %.0lf - %.0lf = %.0lf", num1, num2, formula);
            break;
        case '*' :
            formula = (num1 * num2);
            printf("\nRaw result: %.0lf x %.0lf = %.0lf", num1, num2, formula);
            break;
        case '/' :
            formula = (num1 / num2);
            printf("\nRaw result: %.0lf / %.0lf = %.2lf", num1, num2, formula);
            break;
    }
    
    return 0;
}