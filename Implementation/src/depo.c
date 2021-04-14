#include"atm.h"
/**
 * @brief 
 * 
 * @param amount 
 * @param amountd 
 * @return int 
 */
int deposite(int amount,int amountd){

   printf("enter the amount to deposit\n");
     scanf("%d",&amountd);
     if(amountd%100!=0)
        {
            printf("Please enter the amount in multiples of 100\n");
        }
     else
        {
         amount=amount+amountd;
         printf("amount deposited successfully\n");
         printf("Your current Balance is: %d",amount);

        }
        return amount;
}

