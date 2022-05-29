#include<stdio.h>
int fibonacci(int num);
void main()
{
	int number=0,i;
	printf("Program to find fibonacci series using iteration \n");
	printf("Enter number of terms you want in fibonacci series :- ");
	scanf("%d" , &number);
	printf("Fibonacci Series :- \n");
	for(i=0 ; i<number ; i++)
	{
		printf("%d \t" , fibonacci(i));
	}
}

int fibonacci(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(num-1) + fibonacci(num-2);
	}
}
