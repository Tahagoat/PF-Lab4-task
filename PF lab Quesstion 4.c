#include <stdio.h>

int main()
{
    int age, salary;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your salary: ");
    scanf("%d", &salary);

    if (salary >= 40000 && age >= 25)
    {
        printf("Loan Approved ");
    }
    else
    {
        printf("Loan Rejected ");
    }

    return 0;
}




