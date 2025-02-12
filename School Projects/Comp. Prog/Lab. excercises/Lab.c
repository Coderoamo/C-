#include <stdio.h>

int main() {
    
    float Totalbalance;
    int operation;
    float deposit;
    float withdraw;
    int limit = 3;
    int i;
    
    printf("Welcome to the ATM!\n");
    printf("Please Choose your Operation\n");
    printf("1- Check Balance\n");
    printf("2- Deposit Money\n");
    printf("3- Withdraw Money\n");
    printf("4- Exit\n");

    start:
   
    printf("Response: ");
    scanf("%i", &operation);

    if(operation <= 0 || operation > 4) {
        printf("INVALID INPUT");
    }

    else {
    switch (operation) {

    case 1 :
        printf("\nYour Balance is PHP: %.2f\n\n", Totalbalance);
        goto start;
        break;
    case 2 :
        printf("Enter Desired Amount: ");
        scanf("%f", &deposit);

        if(deposit > 0) {
            printf("\nTransaction Successful!\n");
            printf("New Balance: PHP %.2f\n\n", Totalbalance += deposit);
            i++;
        }

        else {
            printf("Transaction Unsuccessful!\n");
            printf("Please enter a valid amount!\n\n");
        }
        goto start;
        break;
    case 3 :
        printf("Enter Desired Amount: ");
        scanf("%f", &withdraw);


        if(withdraw > 0) {
            printf("\nTransaction Successful!\n");
            printf("New Balance: PHP %.2f\n\n", Totalbalance -= withdraw);
            i++;
        }
        
        else {
            printf("Transaction Unsuccessful!\n");
            printf("Please enter a valid amount!\n\n");
        }
        goto start;
        break;

    case 4 :
        
        printf("\nThank you, Come Again!\n\n");
        break;

    default :
        printf("\nInvalid Operation!");
        goto start;
        break;
    }
        }
    return 0;
}