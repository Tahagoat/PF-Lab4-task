#include <stdio.h>
#include <string.h>

int main()
{
    char nationality[20];
    int age;

    printf("Enter your nationality: ");
    scanf("%s", nationality);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 18 && strcmp(nationality, "Pakistani") == 0)
    {
        printf("You are Eligible");
    }
    else
    {
        printf("Not Eligible");
    }

    return 0;
}

