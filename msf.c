
#include<stdio.h>
 
int main()
{
   int a, b, c;
   
   printf("Enter two numbers to add\n");
   scanf("%d%d", &a, &b);
   
   c = a + b;
   
   printf("Sum of the numbers = %d\n", c);
   
   return 0;
}

int main()
{
	int a,b,sub;

	//Read value of a
	printf("Enter the first no.: ");
	scanf("%d",&a);

	//Read value of b
	printf("Enter the second no.: ");
	scanf("%d",&b);

	//formula of subtraction
	sub= a-b;
	printf("subtract is = %d\n", sub);

	return 0;
}

int main()
{
	int num1,num2,quotient;
	
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	
	quotient=num1/num2;
	printf("Quotient: %d",quotient);
	return  0;
}