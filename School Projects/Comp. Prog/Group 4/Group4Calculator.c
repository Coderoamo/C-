#include <stdio.h>

int main(){

    char operation;                             //declaration
    double firstNumber, secondNumber, result;   //declaration

    printf("Welcome to the Whole Number Calculator of Group 4!\n"); //output
    printf("What operation do you want to use?(+,-,*,/)");          //output
    scanf("%c", &operation);                                        //input

    printf("What is your first number?");               //output
    scanf("%lf", &firstNumber);                         //input

    printf("What is your second number?");              //output
    scanf("%lf", &secondNumber);                        //input

    switch(operation){
        case '+':                                   //addition
            result = firstNumber + secondNumber;    //formula
            printf("Result: %.0lf", result);        //output
            break;
        case '-':                                   //subtraction
            result = firstNumber - secondNumber;    //formula
            printf("Result: %.0lf", result);        //output
            break;
        case '*':                                   //multiplication
            result = firstNumber * secondNumber;    //formula
            printf("Result: %.0lf", result);        //output
            break;
        case '/':                                   //division
            result = firstNumber / secondNumber;    //formula
            printf("Result: %.2lf", result);        //output
            break;
        default:                                    //invalid input
            printf("Invalid Input");                //output
    }

    return 0;
}