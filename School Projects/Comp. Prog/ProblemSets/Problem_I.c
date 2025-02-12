//Even Or Odd Number Checker
#include <stdio.h>

int main() {
    int number, result;
    char letter;
    
    printf("Enter Number: ");

    result = number % 2;

    if(scanf("%d", &number) != 1) {
        printf("Err Input!");

        return 0;
    }

    letter = getchar();

    if(letter != '\n') {
        printf("Err Input!");

        return 0;
    }

    else if(number) {

        if(result == 1) {
        printf("Your Number is Even!");
        }
        else {
        printf("Your Number is Odd!");
        }
    }

    return 0;
}