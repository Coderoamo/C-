#include <stdio.h>

int main (){
    float currentbal = 0;
    int option = 0;
    float deposit = 0;
    float withdrawal =0;

    Main_menu:

    printf("\nSelect an option: ");
    scanf("%d", &option);

    if(option <= 0 || option >4){
        printf("Invalid Option");
    } else {
    switch(option){
        case 1:
            printf("Current Balance: %.2f\n", currentbal);
            goto Main_menu;
            break;

        case 2:
            printf("Enter Amount: ");
            scanf("%f", &deposit);
            if (deposit <= 0){
                printf("Invalid Input\n");
            } 
            
            else {

                printf("Amount: %.2f\n", currentbal += deposit);
            }
            goto Main_menu;
            break;

        case 3:
            printf("Enter Amount: ");
            scanf("%f", &withdrawal);
            if (withdrawal > currentbal){
                printf("Exceeds Amount\n");
            } else {
                currentbal -= withdrawal;
                printf("Amount: %.2f\n", currentbal);
            }
            goto Main_menu;
            break;

        case 4:
            printf("Thank you for using the ATM");
            break;

        default:
            printf("Invalid Input, please select a valid choice\n");
            goto Main_menu;
    }
    }
}