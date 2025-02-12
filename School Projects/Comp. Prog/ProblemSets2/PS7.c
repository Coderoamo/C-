#include <stdio.h>

int main() {

    int num, result, max = 12;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num <= -1) {
        
        printf("Err: Invalid Input!");

        return 0;
    }

    printf("\nThe Multiplication Table for %d\n\n", num);

    for(int i = 1; i <= max; i++) {

        result = i * num;

        printf("%d x %d = %d\n", i, num, result);
    }

    return 0;
}