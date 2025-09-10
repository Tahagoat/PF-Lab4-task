#include<stdio.h>
void main()
 {
 	int x ,y,z;
 	printf("Enter 3 numbers:");
 	scanf("%d\n%d\n%d",&x,&y,&z);
 	if(x>y&&x>z)
 	{
 		printf("%d is largest",x);
	 }
	else if(y>x&&y>z)
 	{
 		printf("%d is largest",y);
	 }
	else if(z>x&z>y)
 	{
 		printf("%d is largest",z);
	 }
}
