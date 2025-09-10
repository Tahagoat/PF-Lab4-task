#include <stdio.h>

void main()
{
	int temperature;
	
	printf("Enter temperature in degrees:");
	scanf("%d",&temperature);
	if(temperature>30)
	{
		printf("Hot Day");
	}
	else
	printf("Pleasant Day");
	
}
