#include <stdio.h>

int main() {
    int indiScore[3];
    int size = sizeof(indiScore)/sizeof(indiScore[0]);

    int overallScore;
    int removalScore;

    printf("Enter Score of Quizzes\n");

        for(int i = 1; i <= size; i++) {
        printf("Quiz #%i: ", i);
        scanf("%i", &indiScore[i]);

        overallScore += indiScore[i];
        
    }
    printf("\nOverall Score: %i\n", overallScore);

    if(overallScore >= 101) {
        printf("Response: ERROR please try again\n");
    }
    else if(overallScore > 5) {
        printf("Response: You Passed!\n");
    }
    else if(overallScore < 5) {
        printf("Response: You Failed!\n");
        printf("Action: Take Removal exam\n");

        printf("RMS Score: ");
        scanf("%i", &removalScore);

        if(removalScore > 6) {
            printf("\nResponse: You Passed!\n");
            return 0;
        }
        else if(removalScore < 6) {
            printf("Response: You Failed!\n");
            printf("Action: Try again!\n");
        }
        printf("Response: Shift NOW!");
    }
    }
