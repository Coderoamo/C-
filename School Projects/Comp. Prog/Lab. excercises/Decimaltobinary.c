#include <stdio.h>
#include <string.h>

int main() {

    int decNum, result, remainder, i;
    char temp[70];
    char binary[70];
    char valletter;
    
    printf("Welcome to my Decimal to Binary Converter!\n");
    printf("Enter a positive number!\n");

    printf("Response: ");
    scanf("%d", &decNum);

    if(decNum == 0) {

        printf("Binary Equivalent is: 0");

        return 0;
    }

    valletter = getchar();

    if(decNum <= 0 || valletter != '\n') {
        printf("Err: Invalid Input (Please enter a Positive integer!)");

        return 0;
    }

    while(decNum > 0) {

        remainder = decNum % 2;
        sprintf(temp, "%d", remainder);
        strcat(temp, binary);
        strcpy(binary, temp);

        decNum = decNum / 2;
    }
    printf("The Binary Equivalent is: %s", binary);

    return 0;
}
