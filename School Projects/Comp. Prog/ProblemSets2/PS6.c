#include <stdio.h>

int main() {

    int num, counter, check = 1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    for(counter = 2; counter < num; counter++) {

        if(num % counter == 0) {

            check = 0;
        }
    }

    if(check == 1) {

        printf("Its a Prime Number!");
    }
    else {
        printf("Its not a Prime Number!");
    }

    return 0;

}