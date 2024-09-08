#include <stdio.h>

int main() {

    char name[10];
    int age;

    printf("What is your name: ");
    scanf("%s", &name);

    printf("How old are you: ");
    scanf("%i", &age);

    printf("\nHello %s!\n", name);
    printf("You are %i years old", age);

    return 0;
}