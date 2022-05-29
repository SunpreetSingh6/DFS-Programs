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
	if(num == 0)
	{
		return 1;
	}
	else
	{
		return num*factorial(num-1);
	}
}
