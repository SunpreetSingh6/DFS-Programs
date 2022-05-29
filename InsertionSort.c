#include<stdio.h>
void insertionSort(int ar[] , int size)
{
	int i,key,j;
	for(i=1;i<size;i++)
	{
		key=ar[i];
		j=i-1;
		while(j>=0 && ar[j]>key)
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=key;
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
	insertionSort(ar,size);
	printf("\nSorted array elements are:- \n");
	printArray(ar,size);
}
