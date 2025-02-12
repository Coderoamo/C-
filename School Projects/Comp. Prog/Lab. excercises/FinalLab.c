#include <stdio.h>

int main() {

    //Declaration of Variables(improved)
    float r1, r2, RTotalSeries, RTotalParallel;
    char validator, validator1, valetter[5];

    //Additional text info(improved)
    printf("Resistance Calculator in Series and Parrarel Circuits\n");
    printf("Enter Value of Resistors!\n");

    //user input(improved)
    validator = scanf("%f, %c", &r1, &valetter);

    //data validation
    if(validator != 1) {
        printf("INVALID INPUT!(CHAR_ERR)");
        return -1;
    }
 
    //user input(improved)
    /*validator1 =*/ scanf("%f", &r2 /*&valetter*/);

    //another Data Validation(added & improved)
    if(r1 <= 0 || r2 <= 0) {
        printf("INVALID INPUT!(NUM/NUMCHAR_ERR)");
        return -1;
    }
    

    //process formula in calculating total series and total parrarel
    RTotalSeries = (r1 + r2);
    RTotalParallel = (r1 * r2) / (RTotalSeries);


    //display results
    printf("\nR1 Value: %.2f", r1);
    printf("\nR2 Value: %.2f", r2);
    printf("\n\nTotal Series: %.2f", RTotalSeries);
    printf("\nParrarel Circuits: %.2f", RTotalParallel);
    return 0;
    
}

/*data validation in c that does not accept a 
number with a letter as an input*/