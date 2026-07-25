// nasted staments
// atm machine 


#include <stdio.h>
int main(){
    int cardValidity, cardPin, balance, withdrawal;
    int correctPin = 540;                                // stores actual ATM PIN

    printf("            #ATM MACHINE#          \n\n");   // DISPLAY HEADING

    printf("Enter Card Validity (1 = Valid, 0 = Invalid): ");  // CARDVALIDITY STORE WHETHER CARD IS VALID
    scanf("%d", &cardValidity);

    printf("Enter PIN: ");                              // STORES THE ENTRED PIN
    scanf("%d", &cardPin);

    printf("Enter Current Balance: ");                // STORES ACCOUNT BALANCE
    scanf("%d", &balance);

    printf("Enter Withdrawal Amount: ");          // STORES WITHDRAWAL AMOUNT
    scanf("%d", &withdrawal);

    if (cardValidity == 1){    // CHECKS WHETHER CARD IS VALLID
        if (cardPin == correctPin){    // CHECKS PIN
            if (withdrawal > 0){       // CHECK WITHDRAWAL AMOUNT IS POSITIVE
                if (balance >= withdrawal){
                    balance = balance - withdrawal;

                    printf("\nWithdrawal Successful!\n");
                    printf("Remaining Balance = %d\n", balance);
                }
                else{
                    printf("\nInsufficient Balance!\n");
                }
            }
            else{
                printf("\nInvalid Withdrawal Amount!\n");
            }
        }
        else{
            printf("\nWrong PIN! Please try again.\n");
        }
    }
    else{
        printf("\nInvalid Card!\n");
    }
    printf("\nThank You for using our ATM.\n");
    return 0;
}
