#include <stdio.h>

int main() {
    int balance = 0, x, choice;
    char repeat = 'y';
    
    while (repeat == 'y' || repeat == 'Y') {
        printf("\nATM SIMULATOR \n Choose any one of the following options:\n 1. Check balance \n 2. Deposit \n 3. Withdraw\n 4. Exit\n\n ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("The current balance in your account is Rs.%d\n", balance);
                break;
                
            case 2:
                printf("Enter the amount you want to deposit: Rs. ");
                scanf("%d", &x);
                if (x >= 0) {
                    balance = balance + x;
                    printf("Your account now has Rs.%d\n", balance);
                } else {
                    printf("Enter a valid amount.\n");
                }
                break;
                
            case 3:
                printf("Enter the amount you want to withdraw: Rs. ");
                scanf("%d", &x);
                if (x > 0) {
                    if (x <= balance) {
                        balance = balance - x;
                        printf("Your account now has Rs.%d\n", balance);
                    } else {
                        printf("You don't have enough balance in your account.\n");
                    }
                } else {
                    printf("Enter a valid withdrawal amount.\n");
                }
                break;
                   
            case 4:
                printf("Thank you for using ATM Simulator!!\n");
                break;
                
            default:
                printf("Enter valid integer value.\n");
                break;    
        }
        
        printf("Do you want to continue: (y / n) : ");
        scanf(" %c", &repeat); 
    }
    
    return 0;
}