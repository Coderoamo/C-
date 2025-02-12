#include <stdio.h>

int main() {
    int score[10];
    int sum;
    double average;

    for(int i = 1; i < 10; i++) {
        printf("Enter Score #%i: ", i);
        scanf("%i", &score[i]);

        sum += score[i];
    }

    average = sum / 10.00;
    printf("Average: %i\n", sum);

    if(average >= 5) {
        printf("You passed!\n");
    }
    else{
        int removeScore;

        for(int j = 1; j <= 2; j++) {
            printf("Enter Removal Score: ");
            scanf("%i", &removeScore);

            if(removeScore >= 6) {
                printf("You Passed!\n");
                return 0;
            }
            else if(removeScore == 5) {
                printf("You Failed!\n");
            }

        }
        printf("Failed overall\n");
    }
    return 0;
}