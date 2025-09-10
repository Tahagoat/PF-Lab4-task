#include <stdio.h>

void main()
{
	int pass,user;
	pass=1234;
	printf("Enter Password:");
	scanf("%d",&user);
	if(user==pass)
	{
		printf("Access Granted");
	}
	else
	printf("Access denied");
	
	
	

}
