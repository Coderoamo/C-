#include <stdio.h>

int main() {

    int num, fNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Err: Enter only positive numbers!");
    }

    for(int i = num -1; i >= 1; i--) {
        
        fNum = num *= i;
    }

    printf("The Factorial is %d", fNum);

    return 0;
}