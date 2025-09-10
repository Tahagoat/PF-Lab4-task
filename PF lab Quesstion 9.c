#include <stdio.h>
void main()
{
    int attendance, marks;

    printf("Enter your attendance percentage: ");
    scanf("%d", &attendance);

    printf("Enter your internal marks: ");
    scanf("%d", &marks);

    if (attendance >= 75 && marks >= 40)
    {
        printf("Eligible for Final Exam");
    }
    else
    {
        printf("Not Eligible for Final Exam");
    }

    
}

