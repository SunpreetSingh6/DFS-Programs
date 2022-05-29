#include<stdio.h>
int factorial(int num);
void main()
{
	int number=0,result=0;
	printf("Program to find factorial of a given number using iteration \n");
	printf("Enter a number to find factorial :- ");
	scanf("%d" , &number);
	result = factorial(number);
	printf("Factorial of %d is :- %d" , number , result);
}

int factorial(int num)
{
	int fact=1;
	if(num == 1)
	{
		return 1;
	}
	else
	{
		while(num>1)
		{
			fact = fact*num;
			num--;	
		}
		return fact;
	}
}
