#include <stdio.h>
int binarySearch(int ar[] , int beg , int last , int value);
void main()
{
	int i,j,size,ar[20],beg,mid,last,temp,item,result=-1;
	printf("Binary Search Program ");
	printf("\nPlease enter the number of elements:- ");
	scanf("%d" , &size);
	printf("Please enter array elements :- \n");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &ar[i]);
	}
	printf("Entered array elements are:- \n");
	for(i=0;i<size;i++)
	{
		printf("%d \t" , ar[i]);
	}
	printf("\nSorting the entered elements to perform binary search... \n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ar[i]>ar[j])
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	printf("Sorted elements are:- \n");
	for(i=0;i<size;i++)
	{
		printf("%d \t" , ar[i]);
	}
	
	printf("\nEnter element to be search :- ");
	scanf("%d" , &item);
	result = binarySearch(ar,0,size,item);
	if(result==-1)
	{
		printf("%d not found in the arrar..."  , item);
	}
	else
	{
		printf("%d element found at index %d" , item , result);
	}
	
}

int binarySearch(int ar[] , int beg , int last , int item)
{
	int mid;
	if(last>=beg)
	{
		mid = (beg+last)/2;
		if(ar[mid]==item)
		{
			return mid;
		}
		else if(ar[mid]<item)
		{
			return binarySearch(ar,mid+1,last,item);
		}
		else
		{
			return binarySearch(ar,beg,mid-1,item);
		}
	}
	return -1;
}
