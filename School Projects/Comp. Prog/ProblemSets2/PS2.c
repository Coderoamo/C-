#include <stdio.h>

int main() {

    int num, sum;
    
    printf("Enter Positive Number: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Err: Please enter positive a number!");
        return 0;
    }

    int temp = num - 1;
    while (temp >= 1) {

        sum = num += temp;
        temp--;
    }
    printf("%d", sum);

    return 0;
}