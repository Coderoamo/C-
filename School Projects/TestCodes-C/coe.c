#include <stdio.h>
#include <time.h>

int main() {

    int num = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    for(int i = num; i >= 1; i--) {
        printf("%d", i);
    }
}