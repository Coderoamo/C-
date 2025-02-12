#include <stdio.h>

int numCuber(int num);

int main() {

    int num;
    int result;
    scanf("%d", &num);

    result = numCuber(num);

    printf("The Cube of %d is %d", num, result);

    return 0;    
}
int numCuber(int num) {

    return num * num * num;
}