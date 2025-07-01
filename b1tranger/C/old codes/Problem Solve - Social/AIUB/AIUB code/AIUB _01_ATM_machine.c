#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Select,\n(1) For Withdrawing Money\n(2) To Transfer Money\n(3) For Checking Your Recent Transactions\n\n");
    scanf("%d", &a);
    if(a==1)
    {printf("\nPlease specify the amount you want to request: ");
    scanf("%d", &b);
    printf("\n\nPlease provide your current account balance: ");
    scanf("%d", &c);
    printf("\n\nYour current account balance is: %d\n\n",c-b);
    }
    else if(a==2)
    {
        printf("\nEnter recipient's account number: ");
        scanf("%d", &b);
        printf("\nEnter the amount you want to transfer: ");
        scanf("%d", &c);
        printf("\nYour updated balance is: %d\n\n", c);
}
    else if(a==3)
    {
        printf("\nYou have no recent transactions.\n\n");

    }

return 0;

}

