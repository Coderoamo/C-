#include <stdio.h>

int main() {
    
    int indiScore;
    int overallScore;
    double percentile;
    
    for(int i = 1; i <= 10; i++) {
        printf("Quiz #%i: ", i);
        scanf("%i", &indiScore);
        overallScore += indiScore;
        percentile = 100 / overallScore;
    }
//******************************************************
    printf("\nTotal Scores: %i\n", overallScore);
    printf("Percentile: %lf", percentile);
//******************************************************

switch(overallScore) {
    case 5 :
        if(overallScore >= 5) {
            printf("Yo Passed");
        }
}

    
    
    

}