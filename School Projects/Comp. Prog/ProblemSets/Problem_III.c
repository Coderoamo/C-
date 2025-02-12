//Integer Grade equivalent to a letter
#include <stdio.h>

int main() {

    int gradeInput;
    char letterVal;

    printf("Enter Your (INTEGER) Grade: ");
    scanf("%d", &gradeInput);

    letterVal = getchar();

    if(letterVal != '\n') {
        printf("Err Input!");

        return 0;
    }

    else if(gradeInput > 100) {
        printf("Your input is beyond the max grade!");
    }

    else if(gradeInput >= 90 && gradeInput <= 100) {

        printf("You Got an: A! (Excellent!)");
    }

    else if(gradeInput >= 80 && gradeInput <= 89) {

        printf("You got a: B! (Very Good)");
    }

    else if(gradeInput >= 70 && gradeInput <= 79) {

        printf("You got a: C! (Good)");
    }

    else if(gradeInput >= 60 && gradeInput <= 69) {
        
        printf("You got a: D! (Meh)");
    }

    else if(gradeInput >= 0 && gradeInput < 60) {

        printf("You got an: F! (Better Luck Next Time)\n");
    }
    else {
        printf("Please Enter a positive integer!");
    }
    
    return 0;
}