#include <stdio.h>

int main() {

    int n1 = 0, n2 = 1, count,fResult;

    printf("Fibonacci sequence\n\n");

    printf("Enter how many terms: ");
    scanf("%d", &count);

    printf("\nThe Fibonacci Sequence %d terms\n", count);

    for(int i = 1; i <= count; i++) {

        printf("%d ", n1);

        fResult = n1 + n2;

        n1 = n2;
        n2 = fResult;

    }
    return 0;
}