#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void insertfirst();
void insertlast();
void insertrandom();
void deletefirst();
void deletelast();
void deleterandom();
void search();
void reverse();
void display();
int main()
{
	int ch;
	printf("Linked list program \n");
	printf("Linked List Operations :- Please choose any below operations \n");
	printf("1)Insert at beginning \n2)Insert at last \n3)Insert at random location \n4)Delete at beginning \n5)Delete at last \n6)Delete after specified location \n7)Search \n8)Reverse \n9)Display \n10)Exit \n");
	do
	{
		printf("Please enter your choice:- ");
		scanf("%d" , &ch);
		switch(ch)
		{
			case 1 : 
			{
				insertfirst();
				break;
			}
			case 2 : 
			{
				insertlast();
				break;
			}
			case 3 : 
			{
				insertrandom();
				break;
			}
			case 4 : 
			{
				deletefirst();
				break;
			}
			case 5 : 
			{
				deletelast();
				break;
			}
			case 6 : 
			{
				deleterandom();
				break;
			}
			case 7 : 
			{
				search();
				break;
			}
			case 8 : 
			{
				reverse();
				break;
			}
			case 9 : 
			{
				display();
				break;
			}
			case 10 : 
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
	while(ch!=10);
}

void insertfirst()
{
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node*));			// Giving ptr dynamic memory from heap memory.
	if(ptr==NULL)
	{
		printf("Overflow \n");
	}
	else
	{
		int item;
		printf("Enter the data to be inserted:- ");
		scanf("%d" , &item);
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("Node inserted successfully... \n");
	}
}
void insertlast()
{
	struct node *ptr,*temp;
	ptr = (struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		printf("Overflow \n");
	}
	else
	{
		int item;
		printf("Enter the data to be inserted:- ");
		scanf("%d" , &item);
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			head=ptr;
			printf("Node inserted successfully... \n");
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=NULL;
			printf("Node inserted successfully... \n");
		}
	}
}
void insertrandom()
{
	struct node *ptr,*temp;
	ptr = (struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		printf("Overflow \n");
	}
	else
	{
		int item,loc,i;
		printf("Enter the data to be inserted:- ");
		scanf("%d" , &item);
		ptr->data=item;
		printf("Enter the location where this data this to be inserted:- ");
		scanf("%d" , &loc);
		temp=head;
		while(i!= loc-1)
		{
			temp=temp->next;
			i++;
			if(temp==NULL)
			{
				printf("Can't insert \n");
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("Node inserted successfully... \n");
	}
}

void deletefirst()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("Linked list empty... \n");
	}
	else
	{
		ptr=head;
		head=ptr->next;
		free(ptr);														// free() method is used to free dynamic memory which we have allocated.
		printf("First node deleted successfully... \n");
	}
	
}
void deletelast()
{
	struct node *ptr,*ptr2;
	if(head==NULL)
	{
		printf("Linked list empty... \n");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
		printf("Last and only node deleted successfully... \n");
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr2=ptr;
			ptr=ptr->next;
		}
		ptr2->next=NULL;
		free(ptr);
		printf("Last node deleted successfully... \n");
	}	
}
void deleterandom()
{
	struct node *ptr,*ptr2;
	int i,loc;
	if(head==NULL)
	{
		printf("Linked list empty... \n");
	}
	else
	{
		printf("Enter the location where you want to perform deletion:- ");
		scanf("%d" , &loc);
		ptr=head;
		while(i != loc-1)
		{
			ptr=ptr->next;
			i++;
		}
		ptr2=ptr->next;
		ptr->next=ptr2->next;
		free(ptr2);
		printf("Node at %d location deleted successfully... \n" , loc);
	}
}
void search()
{
	struct node *temp;
	int item,i=0,flag;
	temp=head;
	if(temp==NULL)
	{
		printf("Linked list empty...  \n");
	}
	else
	{
		printf("Enter item to be searched :- ");
		scanf("%d" , &item);
		while(temp!=NULL)
		{
			if(temp->data==item)
			{
				printf("Element found at location :- %d \n" , i+1);
				flag=0;
				return;
			}
			else
			{
				flag=1;
			}
			i++;
			temp=temp->next;
		}
		if(flag==1)
		{
			printf("Item not found...  \n");
		}
	}
}
void reverse()
{
	
}
void display()
{
	struct node *temp;
	temp=head;
	if(temp==NULL)
	{
		printf("Linked list empty...  \n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d \n" , temp->data);
			temp=temp->next;
		}
	}
}
