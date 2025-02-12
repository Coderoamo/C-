//Determining if a Year is a leap year not.
#include <stdio.h>

int main() {

    int inputYear;
    char letterVal;

    printf("Enter a Year: ");
    scanf("%d", &inputYear);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    else if(inputYear % 4 == 0 || inputYear % 400 == 0) {

        printf("It is a Leap Year!");
    }
    else {
        printf("Its Not a Leap Year!");
    }

    return 0;
}