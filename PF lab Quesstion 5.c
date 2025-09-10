#include <stdio.h>

int main()
{
    int num1, num2,add, sub,mult;
    float div;
    char calc;
    printf("Enter number1:");
    scanf("%d",&num1);
    printf("Enter number2:");
    scanf("%d",&num2);
    printf("Enter + for addition\n Enter - for subtraction \n Enter * for Multiplication \n Enter / for division:");
    scanf(" %c",&calc);
    switch(calc){
	
    case '+':
    	add=num1+num2 ;
    	printf("ADDITION IS=%d",add);
    	break;
    case '-' :
    	sub=num1-num2;
    	printf("SUBTRACTION IS=%d",sub);
    	break;
    case '*' :
    	mult=num1*num2;
    	printf("MULTIPLICATION IS=%d",mult);
    	break;
    case '/' :
    	div=(float)num1/num2;
    	if(num2!=0){
		
    	printf("DIVISION IS=%f",div);}
    	else 
    	printf("not valid");
    	break;
    default:
    	printf("Not valid");
    	break;
    
}
}


