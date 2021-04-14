#include <stdio.h>
// #include "atm.h"
/**
 * @brief 
 * 
 */
int choice,amountd,amountw,amount=1000;
/**
 * @brief 
 * 
 * @return int 
 */

int main()
{
    printf("**Welcome To ATM**\n");
    int PIN;
    amount=1000;
    printf("Please insert the card\n");
    printf("Enter the PIN:");
    scanf("%d",&PIN);
    if(PIN==4387||PIN==4390||PIN==4376)
    {
        while(1)
        {
            printf("1.Balance Enquiry\n2.Deposit\n3.Withdraw\n4.Exit\n");
            printf("Enter the choice:\t");
            scanf("%d",&choice);
            /**
             * @brief Construct a new switch object
             * 
             */
            switch(choice)
            {
                case 1:
                    balance(amount);
                    break;
                case 2:
                   amount = deposite(amount,amountd);
                     break;
                case 3:
                    amount = withdraw(amount,amountw);
                    break;
                case 4:
                    printf("\n**THANK YOU FOR USING OUR ATM**\n");
                    exit(0);
            }
            printf("\n******\n");
        }
    }
    else
    {
        printf("Wrong PIN please check the PIN\n");
    }
}
