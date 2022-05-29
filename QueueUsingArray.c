#include<stdio.h>
int front,rear,ch,ele,i,n,queue[100];
void insert();
void delete();
void display();
void main()
{
	front,rear=-1;
	printf("Program to implement queue using arrays\n");
	printf("Enter the size of the queue :- \n");
	scanf("%d" , &n);
	printf("Queue Operations:- \n");
	printf("1) Insert \n2) Delete \n3) Display \n4) Exit \n");
	do
	{
		printf("Please enter your choice:- ");
		scanf("%d" , &ch);
		switch(ch)
		{
			case 1 : 
			{
				insert();
				break;
			}
			case 2 : 
			{
				delete();
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

void insert()
{
	if(rear == n-1)
	{
		printf("Queue Overflow :( \n");
	}
	else
	{
		printf("Enter element to insert into queue :- ");
		scanf("%d" , &ele);
		if(rear==-1 && front==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear++; 
		}
		queue[rear] = ele;
	}
}

void delete()
{
	if(front==-1)
	{
		printf("Queue Underflow :( \n");
	}
	else
	{
		printf("Deleted element is :- %d \n" , queue[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}		
}

void display()
{
	if(rear == -1)
	{
		printf("Queue is empty :( \n");
	}
	else
	{
		printf("Queue is :- \n");
		for(i=front;i<=rear;i++)
		{
			printf("%d \t" , queue[i]);
		}
		printf("\n");
	}
}
