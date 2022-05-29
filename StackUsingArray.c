#include<stdio.h>
int top,ch,ele,i,n,stack[100];
void push();
void pop();
void display();
void main()
{
	top=-1;
	printf("Program to implement stack using arrays\n");
	printf("Enter the size of the stack :- \n");
	scanf("%d" , &n);
	printf("Stack Operations:- \n");
	printf("1) Push \n2) Pop \n3) Display \n4) Exit \n");
	do
	{
		printf("Please enter your choice:- ");
		scanf("%d" , &ch);
		switch(ch)
		{
			case 1 : 
			{
				push();
				break;
			}
			case 2 : 
			{
				pop();
				break;
			}
			case 3 : 
			{
				display();
				break;
			}
			case 4 : 
			{
				printf("Exiting...");
				break;
			}
			default : 
			{
				printf("Please enter valid choice...");
			}
		}
	}
	while(ch!=4);
}

void push()
{
	if(top==n)
	{
		printf("Stack Overflow :( \n");
	}
	else
	{
		printf("Please enter element to push into stack :- ");
		scanf("%d" , &ele);
		top++;
		stack[top]=ele;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack Underflow :( \n");
	}
	else
	{
		printf("Popped element is :- %d \n" , stack[top]);	
		top--;
	}	
}

void display()
{
	if(top == -1)
	{
		printf("Stack is empty :( \n");
	}
	else
	{
		printf("Stack is :- \n");
		for(i=top;i>=0;i--)
		{
			printf("%d \n" , stack[i]);
		}
	}
}
