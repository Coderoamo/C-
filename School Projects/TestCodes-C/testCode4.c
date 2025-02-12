#include <stdio.h>
#include <string.h>

void decimalToBinary(int decimal) {
    char binary[33];  // Array to store binary digits (32 bits + null terminator)
    int index = 0;  // Index for storing binary digits

    // Initialize the binary array with a null terminator
    binary[0] = '\0';

    // Loop to convert decimal to binary
    while (decimal > 0) {
        // Get the remainder when dividing by 2
        int remainder = decimal % 2;

        // Prepend the remainder to the binary string
        char temp[2];
        sprintf(temp, "%d", remainder);  // Convert remainder to string
        strcat(temp, binary);  // Concatenate the remainder to the front of binary

        // Update the binary string
        strcpy(binary, temp);

        // Divide the decimal number by 2 (integer division)
        decimal = decimal / 2;
    }

    // If decimal is 0, the binary should be "0"
    if (strlen(binary) == 0) {
        strcpy(binary, "0");
    }

    // Print the binary representation
    printf("Binary: %s\n", binary);
}

int main() {
    int decimal;

    // Get input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary and print
    decimalToBinary(decimal);

    return 0;
}
