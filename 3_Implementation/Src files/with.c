#include"atm.h"
/**
 * @brief 
 * 
 * @param amount 
 * @param amountw 
 * @return int 
 */
int withdraw(int amount,int amountw){

    printf("Enter the amount to withdraw\n");
        scanf("%d",&amountw);
        if(amountw>amount)

            {
              printf("please check the balance!!\n$$!! Insufficient balance!!$$\n$\n");
            }
        else if(amountw%100!=0)
        {
            printf("Please enter the amount in multiples of 100\n");
        }
        else
            {
                amount=amount-amountw;
                printf("COLLECT THE CASH\n$$$**$$$\n");
            }
            return amount;
}
