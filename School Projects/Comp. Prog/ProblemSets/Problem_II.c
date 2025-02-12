//Positive, Negative, Zero Number checker
#include <stdio.h>


int main() {

    int number;
    char letterVal;

    printf("Enter a Number: ");
    scanf("%d", &number);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    else if(number > 0) {

        printf("Your Number is Positive!");
    }
    else if(number < 0) {

        printf("Your Number is Negative!");
    }
    else {

        printf("Your Number is Zero!");
    }

    return 0;
}