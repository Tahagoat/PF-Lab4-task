#include <stdio.h>
 int main()
{
	int bill;
	float discounted;
	printf("Enter you Bill amount:");
	scanf("%d",&bill);
	
	if(bill>5000)
	{
	
	   discounted=bill*(90.0/100);
	   printf("your amount after discount is:%f",discounted);
	   }
	else
	 printf("No discount add more money :)");
	 	
}
