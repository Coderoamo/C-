#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int showChoice(int choice);
void chooseWinner(int player, int computer);
int showResults(int player, int computer);
char letterVal();


int main() {

    int player;
    int computer;

    printf("Welcome to the RPS Game!");
    printf("\n1 - Rock");
    printf("\n2 - Paper");
    printf("\n3 - Scissors\n");


    printf("\nEnter Player 1 Choice: ");
    scanf("%d", &player);

    if(letterVal() > 100) {
      printf("ERR");
    }

    printf("Enter Player 2 Choice: ");
    scanf("%d", &computer);

    if(player <= 0 || player > 3 ||computer <= 0 || computer > 3) {
        printf("INVALID PLAYER INPUT!!");

        return 0;
    }

    showResults(player, computer);

    return 0;
}
int showChoice(int choice) {

    switch(choice) {

        case 1 :
            printf("Rock");
            break;
        case 2 : 
            printf("Paper");
            break;
        case 3 :
            printf("Scissors");
            break;
    }
    return 0;
}
void chooseWinner(int player, int computer) {

    switch(player){ 
    
    case 1 :
            if(computer == 1) {
              printf("Its a Tie!");
            }
            else if(computer == 2) {
              printf("Player2 Win!");
            }
            else{
              printf("Player1 Win!");
            }
            break;
    case 2 :
            if(computer == 3) {
              printf("You Win!");
            }
            else if(computer == 2) {
              printf("Its a Tie!");
            }
            else{
              printf("You Lose!");
            }
            break;
    case 3 :
            if(computer == 1) {
              printf("You Lose!");
            }
            else if(computer == 2) {
              printf("You Win!");
            }
            else{
              printf("Its a Tie!");
            }
            break;
         
    }
}
int showResults(int player, int computer) {

     printf("\nPlayer 1 Choice: ");
    showChoice(player);

    printf("\nPlayer 2 Choice: ");
    showChoice(computer);

    printf("\n\nResult: ");
    chooseWinner(player, computer);

    return player, computer;
}
char letterVal() {

    char player[15];
    int num = strlen(player);
}