//header files for different functions
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

//color definitions
#define GRN "\e[0;32m"

//function prototypes
char playerChoice();
char computerChoice();
void showChoice(char choice);
void gameWinner(char player, char computer);
char playAgain();
void designUpprLwr();

int main() {

  //required vaiables for player and computer 
  //Also validation variables
    char player, computer, inputExtra;

    do {
      system("cls");
      designUpprLwr();
 
    player = playerChoice();
  
    //player input validation
    if(isdigit(player) || isupper(player)) {
      printf("\tErr: Please enter a lower case letter!\n\n");

      printf("\n\t\t\t\t\t\t\t\b\b\b\b\b\t\t\t  PROGRAM TERMINATED\n");

      designUpprLwr();
      return 0;
    }
    
    //player input validation
    else if(player != 'r' && player != 'p' && player != 's') {
      printf("\tErr: Please enter only r, p, s");

      printf("\n\t\t\t\t\t\t\t\b\b\b\b\b\t\t\t  PROGRAM TERMINATED\n");

      designUpprLwr();
      return 0;
    }

    //player input validation
    inputExtra = getchar();

    if(inputExtra != '\n') {
      printf("Err: Please Enter only one Charcter!");
    }
    
  //display player choice (User)
    printf("\n\tYour Choice: ");
    showChoice(player);

  //display computer choice
    computer = computerChoice();
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tComputer Choice: ");
    showChoice(computer);

  //Display Results
    printf("\n\t\t\t\t\t\t\t\b\b\b\b\b\t\t\t\b\b\b\b\bResults: ");
    gameWinner(player, computer);
  }while(playAgain() == 'y');

  printf("\n\t\t\t\t\t\t\t\b\b\b\b\b\t\t\tThank you for Playing!\n");

  designUpprLwr();
}

//player Function
char playerChoice() {

    char player;

    printf("\n\t\t\t\t\t\t\t\b\b\b\b\b\t\t\tWelome to the RPS Game!\n");
    printf("\t\t\t\t\t\b\t\t\tR - Rock");
    printf("\t\t\t\b\b\b\b\b\b\b\b\bP - Paper\t\t\b");
    printf("\t\bS - Scissors\n");

    printf("\tYour Response: ");
    player = getchar();

    return player;
}

//Computer Function
char computerChoice() {

    srand(time(0));
    int rNum = (rand() % 3) + 1;

    switch(rNum) {

        case 1 :
            return 'r';
        case 2 :
            return 'p';
        case 3 :
            return 's';
    }
    return 0;
}

//Diplay Choice Function
void showChoice(char choice) {

    switch(choice) {
        case 'r' :
            printf("Rock");
            break;
        case 'p' :
            printf("Paper");
            break;
        case 's' :
            printf("Scissors");
            break;
    }
}

//function for Displaying Winner/Loser
void gameWinner(char player, char computer) {

    switch(player){ 
    
    case 'r' :
            if(computer == 'r') {
              printf("Its a Tie! (No one wins!)");
            }
            else if(computer == 'p') {
              printf("Computer Win! (You Lose)");
            }
            else{
              printf("You Win! (Computer Lose)");
            }
            break;
    case 'p' :
            if(computer == 's') {
              printf("You Win! (Computer Lose!)");
            }
            else if(computer == 'p') {
              printf("Its a Tie! (No one Wins!)");
            }
            else{
              printf("You Lose! (Computer Wins!)");
            }
            break;
    case 's' :
            if(computer == 'r') {
              printf("You Lose! (Computer Wins)");
            }
            else if(computer == 'p') {
              printf("You Win! (Computer Lose!)");
            }
            else{
              printf("Its a Tie! (No one Wins!)");
            }
            break;
    }
}

//Play Again Function
char playAgain() {

  char againInput, val;

  while(1) {
    printf("\n\n\tDo you want to play again? (y/n)");
    printf("\n\tResponse: ");
    againInput = getchar();

    if(isdigit(againInput) || isupper(againInput)) {

      printf("\tErr: Please enter a lowercase letter ('y' or 'n')!\n");

      
      while(val = getchar() != '\n');
      continue;
    }

    else if(againInput != 'y' && againInput != 'n') {

      printf("\tErr: Please enter only 'y' for Yes or 'n' for No!\n");

      while(val = getchar() != '\n');
      continue;
    }

    val = getchar();

    if(val != '\n') {
      printf("\tErr: Enter only one Character!!\n");

      while(val = getchar() != '\n');
      continue;
    }

    break;
  }

  return againInput;
}

//simple Design Function
void designUpprLwr() {

    printf(GRN"\t*********************************************************************************************************************************************************");
}