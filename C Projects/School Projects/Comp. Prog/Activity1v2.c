#include <stdio.h>

int main() {
    int overallScore;
    int indiScore;
    int removeScore;
    int lastChance;

    for(int i = 1; i <= 10; i++) {
        printf("Quiz# %i: ", i);
        scanf(  "%i", &indiScore);
        overallScore += indiScore;
    }

    printf("\nOverall Score: %i", overallScore);
    

    if(overallScore >= 101) {
        printf("\nERROR: Thats not a Valid Score");
    }

    else if(overallScore > 5) {
        printf("\nStatus: You Passed!");
    }

    else if(overallScore < 5) {
        printf("\nStatus: You Failed!");
        printf("\nAction: Take the removal exam\n");

        printf("\nEnter RME Score: ");
        scanf("%i", &removeScore);

        if(removeScore > 6) {
            printf("\nScore: %i", removeScore);
            printf("\nStatus: You Passed!");
        }
        else if(removeScore < 6) {
            printf("\nScore: %i", removeScore);
            printf("\nStatus: You Failed!(Again?)\n");
            printf("Action: Take last chance exam!\n");

            printf("\nLCE Score: ");
            scanf("%i", &lastChance);
            
            if(lastChance >= 6) {
                printf("\nScore: %i", lastChance);
                printf("\nStatus: You Passed!(Finally)");
            }
            else if(lastChance < 6) {
                printf("\nScore: %i", lastChance);
                printf("\nStatus: You FAILED the Subject!");
            }
        }
    }
        return 0;
}