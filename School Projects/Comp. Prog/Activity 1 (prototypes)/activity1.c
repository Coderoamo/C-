#include <stdio.h>

int main() {
    int overallScore;
    int indiScore;
    int removeScore;
    int lastChance;
    

    for(int i = 1; i <= 3; i++) {
        printf("Quiz #%i: ", i);
        scanf("%i", &indiScore);
        overallScore += indiScore;
    }
//******************************************************
    printf("\nTotal Scores: %i", overallScore);
//******************************************************
    if(overallScore >= 5) {
        printf("\nStatus: You Passed!");
    }
//******************************************************
    else if(overallScore < 5) {
        printf("\nStatus: You Failed!\n");

        printf("\nPlease Enter RM Score.");
        printf("\nRM Score: ");
        scanf("%i", &removeScore);

        if(removeScore >= 6) {
            printf("Status: You Passed!");
        }
        else if(removeScore < 6) {
        printf("Status: You Failed!(Again?)\n");
        
        printf("\nPlease Enter LS Score.");
        printf("\nLS Score: ");
        scanf("%i", &lastChance);

        if(lastChance >= 6) {
            printf("You Passed!(Finally!)");
        }
        else if(lastChance < 6){
        printf("Status: You FAILED the Subject.");
        }
    }

        
    }

    return 0;
}