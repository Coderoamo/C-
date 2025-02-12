#include <stdio.h>

int main() {

    int num, digit;
    
    printf("Reverse a number\n\n");

    printf("Enter a Positive #: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Err: Invalid Input!");

        return 0;
    }

    printf("Reversed #: ");

    while(num > 0) {

        digit = num % 10;
        num /= 10;

        printf("%d", digit);
    }

    return 0;
}