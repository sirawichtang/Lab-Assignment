#include <stdio.h>

int main(){
    float Money;
    int options;
    
    while(1){
        printf("===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Choose an option : ");
        scanf("%d", &options);
        switch(options){
            case(1):
            printf("Current Balance : %.2f\n", Money);
            break;
            case(2):
            float depositedAmount;
            printf("Enter amount to deposit : ");
            scanf("%f", &depositedAmount);
            Money += depositedAmount;
            break;
            case(3):
            float withdrawAmount;
            printf("Enter amount to withdraw : ");
            scanf("%f", &withdrawAmount);
            Money -= withdrawAmount;
            break;
            case(4):
            printf("Thank you for using the ATM.\n");
            return 0;
            default:
            printf("Invalid commands\n");
        }
        printf("\n");
    }

}