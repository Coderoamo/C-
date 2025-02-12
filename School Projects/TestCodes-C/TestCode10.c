#include <stdio.h>

double add(double a, double b);
double sub(double a, double b);
double multi(double a, double b);
double div(double a, double b);

int main() {

    double num1;
    double num2;
    char again;

    do {

        printf("Enter Two Numers!\n\n");
        
        printf("Num1: ");
        scanf("%lf", &num1);

        printf("Num2: ");
        scanf("%lf", &num2);

        printf("The Sum of %.0lf and %.0lf is: %.0lf", num1, num2, add(num1, num2));
        printf("\nThe Differnce of %.0lf and %.0lf is: %.0lf", num1, num2, sub(num1, num2));
        printf("\nThe Product of %.0lf and %.0lf is: %.0lf", num1, num2, multi(num1, num2));
        printf("\nThe Quotient of %.2lf and %.2lf is: %.2lf", num1, num2, div(num1, num2));

        printf("\n\nAgain(Y/N)");
        while(getchar() != '\n');
        scanf("%c", &again);
    }while(again == 'y' || again == 'Y');

    return 0;

}
double add(double a, double b) {

    a + b;
}
double sub(double a, double b) {
    a - b;
}
double multi(double a, double b) {
    a * b;
}
double div(double a, double b) {
    a / b;
}
