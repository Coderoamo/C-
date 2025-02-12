#include <stdio.h>

int main() {

    float r1, r2, validator, RTotalSeries, RTotalParallel;

    printf("Resistance Calculator in Series and Parrarel Circuits\n");

    do {
         printf("Enter Resistor1: ");
         scanf("%f", &r1);

         printf("Enter Resistor2: ");
         scanf("%f", &r2);
    }while(r1 <= 0 || r2 <= 0);
}