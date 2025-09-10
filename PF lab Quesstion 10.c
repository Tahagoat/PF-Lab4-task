#include <stdio.h>

void main()
{
    int balance, withdraw;

    printf("Enter your balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    if (balance > withdraw && withdraw % 500 == 0)
    {
        printf("Withdrawal Successful");
    }
    else
    {
        printf("Withdrawal Rejected");
    }

    
}

