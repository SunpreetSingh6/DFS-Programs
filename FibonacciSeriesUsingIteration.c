#include<stdio.h>
int fibonacci(int num);
void main()
{
	int number=0,result=0;
	printf("Program to find fibonacci series using iteration \n");
	printf("Enter number of terms you want in fibonacci series :- ");
	scanf("%d" , &number);
	fibonacci(number);
}

int fibonacci(int num)
{
	int n1=0,n2=1,n3=0,i=2;
	printf("Fibonacci Series :- %d     %d" , n1 , n2);
	while(i<num)
	{
		n3 = n2 + n1;
		n1=n2;
		n2=n3;
		i++;
		printf("\t%d" , n3);
	}
}
