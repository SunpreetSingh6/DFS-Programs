#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,temp;
	printf("Program to transpose a matrix");
	printf("Enter a size of matrix i.e (n x n) :- ");
	scanf("%d" , &n);
	int a[n][n];
	printf("Enter elements :- " );
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			scanf("%d" , &a[i][j]);
		}
	}
	
	printf("Entered matrix is:- \n" );
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d \t" , a[i][j]);
		}
		printf("\n");
	}
	
	// Transposing a matrix without auxilary matrix 
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(j>i)
			{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp ;
			}
		}
	}
	
	printf("Transpose matrix is:- \n" );
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d \t" , a[i][j]);
		}
		printf("\n");
	}
}
