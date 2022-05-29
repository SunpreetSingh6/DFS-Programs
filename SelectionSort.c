#include<stdio.h>
void selectionSort(int ar[] , int size)
{
	int i,j,minIndex,temp;
	for(i=0;i<size;i++)
	{
		minIndex=i;
		for(j=i+1;j<size;j++)
		{
			if(ar[j]<ar[minIndex])
			{
				minIndex=j;
			}
		}
		temp=ar[minIndex];
		ar[minIndex]=ar[i];
		ar[i]=temp;
	}
	
}
void printArray(int ar[] , int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d \t" ,ar[i]);
	}
}
void main()
{
	int size,ar[20],i;
	printf("Insertion Sort Program \n");
	printf("Please enter the size of the array:- ");
	scanf("%d" , &size);
	ar[size];
	printf("Please enter array elements:- ");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("Entered array elements are:- \n");
	printArray(ar,size);
	selectionSort(ar,size);
	printf("\nSorted array elements are:- \n");
	printArray(ar,size);
}
