#include<stdio.h>
int ch,ele,count;
int s1[20],s2[20],top1=-1,top2=-1;
void push1(int ele);
void push2(int ele);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void main()
{
	//front,rear=-1;
	printf("Program to implement queue using two stacks\n");
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
				enqueue();
				break;
			}
			case 2 : 
			{
				dequeue();
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

void push1(int ele)
{
	if(top1==19)
	{
		printf("Stack 1 Overflow \n");
	}
	else
	{
		top1++;
		s1[top1] = ele;
	}
}
int pop1()
{
	if(top1==-1)
	{
		printf("Stack 1 Underflow \n");
	}
	else
	{
		int ele;
		ele = s1[top1];
		top1--;
		return ele;
	}
}
void push2(int ele)
{
	if(top2==19)
	{
		printf("Stack 2 Overflow \n");
	}
	else
	{
		top2++;
		s2[top2] = ele;
	}	
}
int pop2()
{
	if(top2==-1)
	{
		printf("Stack 2 Underflow \n");
	}
	else
	{
		int ele;
		ele = s2[top2];
		top2--;
		return ele;
	}
}
void enqueue()
{
	int num;
	printf("Enter an element to insert in queue :- ");
	scanf("%d" , &num);
	push1(num);
	count++;
}

void dequeue()
{
	if(top2==-1)
	{
		if(top1==-1)
		{
			printf("Queue is empty :( \n");
		}
		else
		{
			int i;
			for(i=0;i<count;i++)
			{
				int ele = pop1();
				push2(ele);
			}
			count=0;
			int pop_ele = pop2();
			printf("Popped element is :- %d \n" , pop_ele);
		}
	}
	else
	{
		int ele = pop2();
		printf("Popped element is :- %d \n" , ele);
	}
}

void display()
{
	if(top1==-1 && top2==-1)
	{
		printf("Queue is empty :( \n");
	}
	else if(top2==-1)
	{
		int i;
		printf("Queue is :- ");
		for(i=0;i<=top1;i++)
		{
			printf("%d \t" , s1[i]);
		}
		printf("\n");
	}
	else if(top1==-1)
	{
		int i;
		printf("Queue is :- ");
		for(i=top2;i>=0;i--)
		{
			printf("%d \t" , s2[i]);
		}
		printf("\n");
	}
	else
	{
		int i,j;
		printf("Queue is :- ");
		for(j=top2;j>=0;j--)
		{
			printf("%d \t" , s2[j]);
		}
		for(i=0;i<=top1;i++)
		{
			printf("%d \t" , s1[i]);
		}
		printf("\n");
	}
}
