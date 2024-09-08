#include <stdio.h>

int main() {
    int overallScore;
    int indiScore[10];
    int size = sizeof(indiScore)/sizeof(indiScore[0]);

    int removeScore;
    int lastChace;

    for(int i = 1; i <= size; i++) {
        printf("Quiz #%i: ", i);
        scanf("%i", &indiScore[i]);
        overallScore += indiScore[i];
    }
    printf("Overall score: %i", overallScore);

    if(overallScore > 101) {
        printf("\nThats not a VALID score!");
        return 0;
    }
    else if(overallScore > 5) {
        printf("\nStatus: You Passed!");
        return 0;
    }
    else if(overallScore < 5) {
        printf("\nStatus: You Failed\n");
    }

    for(int j = 1; j <= 1; j++) {

        printf("\nEnter removal Score.");
        printf("\nRE Score: ");
        scanf("%i", &removeScore);
    }
    if(removeScore > 11) {
        printf("Thats not a VALID score!");
        return 0;
    }
    else if(removeScore >= 6) {
        printf("Status: You Passed!");
    }
    else if(removeScore < 6) {
        printf("Status: You FAILED!\n");
    }

    for(int k = 1; k <= 1; k++) {
        printf("\nEnter Last Chance Score.");
        printf("\nLC Score: ");
        scanf("%i", &lastChace);
    }
    if(lastChace > 11) {
        printf("\nThats not a VALID score!");
        return 0;
    }
    else if(lastChace >= 6) {
        printf("Status: You Passed!\n");
    }
    else if(lastChace < 6) {
        printf("Status: Bagsak!");
    }
    return 0;
}