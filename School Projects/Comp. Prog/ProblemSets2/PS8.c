#include <stdio.h>

int main() {
    
    int num, counNums = 0;

    printf("Number Counter in C!\n");

    printf("Enter a Positive Number: ");
    scanf("%d", &num);

    while(num) {

        num /= 10;
        ++counNums;
    }
    printf("Digits are: %d", counNums);

    return 0;
}