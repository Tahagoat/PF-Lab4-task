#include<stdio.h>
void main()
 {
 	int age ,price;
 	printf("Enter your age:");
 	scanf("%d",&age);
 	if(age<12)
    {
	  price=200;
 	 printf("Ticket price is:%d",price);}
 	else if(age<18&&age>12){
	
 	price=300;
 	printf("Ticket price is:%d",price);
	 }
 	else if(age>18&&age<60)
	 {
 	price=500;
 	printf("Ticket price is:%d",price);
	 }
 	
 	else if(age>60)
	 {
	price=250;
 	printf("Ticket price is:%d",price);
    }
	else
	{
	
	printf("invalid age");
}
 }
