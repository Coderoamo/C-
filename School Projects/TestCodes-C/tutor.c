#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/*
Propose implementations code:

1. Name Input where the player(Human) will Enter his or her name.
2. Improved data validation.
3. Another seperate code where there is player 2(Human). 
4. A play again function.
5. Relax and Chill.
*/


char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void gameWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getPlayerChoice();
    printf("Your Choice: ");
    showChoice(player);

    printf("\n");

    computer = getComputerChoice();
    printf("Computer Choice: ");
    showChoice(computer);

    printf("\n");

    printf("Result: ");
    gameWinner(player, computer);

    return 0;
}

char getPlayerChoice() {
    char player;

    printf("Welcome to the RPS game!\n");

    do {
        printf("R for Rock\n");
        printf("P for Paper\n");
        printf("S for Scissors\n");
        printf("Pick Choice: ");
        scanf(" %c", &player);
        player = toupper(player);
        printf("\n");
    } while (player != 'R' && player != 'P' && player != 'S');

    return player;
}

char getComputerChoice() {
    srand(time(0));
    int num = (rand() % 3) + 1;

    switch (num) {
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }
    return 0; // Default case (shouldn't be reached)
}

void showChoice(char choice) {
    switch (choice) {
        case 'R':
            printf("Rock");
            break;
        case 'P':
            printf("Paper");
            break;
        case 'S':
            printf("Scissors");
            break;
    }
}

void gameWinner(char player, char computer) {
    switch (player) {
        case 'R':
            if (computer == 'R') {
                printf("It's a tie!");
            } else if (computer == 'P') {
                printf("You lose!");
            } else {
                printf("You win!");
            }
            break;
        case 'P':
            if (computer == 'R') {
                printf("You win!");
            } else if (computer == 'P') {
                printf("It's a tie!");
            } else {
                printf("You lose!");
            }
            break;
        case 'S':
            if (computer == 'R') {
                printf("You lose!");
            } else if (computer == 'P') {
                printf("You win!");
            } else {
                printf("It's a tie!");
            }
            break;
    }
}


