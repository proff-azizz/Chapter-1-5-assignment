// Start with int balance = 500;, read deposit and withdraw, apply balance += deposit; and balance -= withdraw;, and print balance
#include <stdio.h>
int main()
{
    int balance = 500, depo,withdraw,select;
    printf("Enter 0 to deposit \nEnter 1 to withdraw\n");
    scanf("%d",&select);
    if(select==0)
    {
        printf("How much do you want to deposit ?\n");
        scanf("%d",&depo);
         printf("you have succesfully deposited %d\n",depo);
        balance+=depo;
        printf("Your current balance is %d",balance);
        }
    else if(select==1)
    {
        printf("How much do you want to withdraw ?\n");
        scanf("%d",&withdraw);
         if (withdraw<balance){
         printf("you have succesfully withdrawn %d\n",withdraw);
        balance-=withdraw;
        printf("Your current balance is %d\n",balance);
        }
        else{
            printf("You don't have Enough Balance\n");
            return 1;
        }
    }
        else 
        {
            printf("please select a valid option\n");
        }
    return 0;
}