//Triangle Checker in C!
#include <stdio.h>

int main() {

    double side1, side2, side3;
    char letterVal;

    printf("Triangle Type Checker!\n");

    printf("\nEnter side 1: ");
    scanf("%lf", &side1);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    printf("Enter side 2: ");
    scanf("%lf", &side2);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    printf("Enter side 3: ");
    scanf("%lf", &side3);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    else if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        
        if(side1 == side2 && side2 == side3) {
            printf("Triangle is an Equalateral!");
        }
        else if(side1 == side2 || side1 == side3 || side3 == side1) {
            printf("Triangle is an Isoceles!");
        }
        else {
            printf("Triangle is Scalene");
        }
    }
    else {
        printf("You Have Inputed a Invalid Triangle!");
    }

    return 0;
}