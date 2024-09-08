#include <stdio.h>
#include <string.h>

int main() {
    int age = 24;
    char name[] = "James";
    char eduStats[] = "College";
    double bankBal = 500.00;
    
    printf("*******TESTCODE*******\n");
    printf("Hello %s\n", name);
    printf("You are %i years old\n", age);
    printf("You are in %s!\n", eduStats);
    printf("You have %.2lf pesos!\n", bankBal);
    printf("*******END OF CODE******");


    return 0;
}
