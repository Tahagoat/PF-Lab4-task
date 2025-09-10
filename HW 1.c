#include <stdio.h>
#include <string.h>

int main()
{
    char email[50], password[50];

    printf("Enter your Email:");
    scanf("%s", email);

    if (strcmp(email, "admin@gmail.com") == 0)
    {
        printf("Enter your Password: ");
        scanf("%s", password);

        if (strcmp(password, "admin123") == 0)
        {
            printf("Access Granted ");
        }
        else
        {
            printf("Invalid Password ");
        }
    }
    else
    {
        printf("Invalid Email ");
    }

    
}

