#include<stdio.h>
int ar[20];
void mergeSort(ar,left,right);
void merge(ar,left,middle,right);
void printArray(ar,size);
void main()
{
	int size,i;
	printf("Program to sort an array using merge sort \n");
	printf("Enter number of elements :- ");
	scanf("%d" , &size);
	int ar[size];
	printf("Enter the elements :- ");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("Entered array is :- ");
	printArray(ar,size);
	mergeSort(ar,0,size-1);
	printf("\nSorted array is :- ");
	printArray(ar,size);
}
void mergeSort(int ar[] , int left , int right)
{
	if(left<right)
	{
		int middle = (left+right)/2;
		mergeSort(ar , left , middle);
		mergeSort(ar , middle+1 , right);
		merge(ar, left , middle , right);
	}
}
void merge(int ar[] , int left , int middle ,int right)
{
	int i,j,k,n1,n2;
	n1 = middle-left+1;
	n2 = right-middle;
	int L[n1] , R[n2];
	for(i=0 ; i<n1 ; i++)
	{
		L[i] = ar[left+i];
	}
	for(j=0 ; j<n2 ; j++)
	{
		R[j] = ar[middle+1+j];
	}
	
	i=0;
	j=0; 
	k=left;
	
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			ar[k] = L[i];
			i++;
		}
		else
		{
			ar[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		ar[k] = L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		ar[k] = R[j];
		j++;
		k++;
	}
}
void printArray(int ar[] , int size)
{
	int i;
	for(i=0 ; i<size ; i++)
	{
		printf("%d\t" , ar[i]);
	}
	printf("\n");
}
