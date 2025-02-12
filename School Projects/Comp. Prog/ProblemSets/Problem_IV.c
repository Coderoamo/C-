//Largest Number Picker
#include <stdio.h>

int main() {

    int num1, num2, num3;
    char letterVal;

    printf("Enter 3 Numbers\n");

    printf("#1: ");
    scanf("%d", &num1);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    printf("#2: ");
    scanf("%d", &num2);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    printf("#3: ");
    scanf("%d", &num3);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    if(num1 > num2) {

        if(num1 > num3) {
            printf("Largest Number is: %d", num1);
        }
        else {
            printf("Largest Number is: %d", num3);
        }
    }
    else {
        if(num1 > num3) {
            printf("Largest Number is: %d", num1);
        }
        else {
            printf("Largest Number is: %d", num3);
        }
    }

    return 0;
}