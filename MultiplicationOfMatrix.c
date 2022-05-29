#include<stdio.h>
#include<stdlib.h>
void main()
{
	int r,c,i,j,k;
	printf("Program to multiply a matrix\n");
	printf("Enter number of rows of matix :- ");
	scanf("%d" , &r);
	printf("Enter number of columns of matix :- ");
	scanf("%d" , &c);

	int m1[r][c];
	printf("Enter elements of 1st matrix:- " );
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			scanf("%d" , &m1[i][j]);
		}
	}

	int m2[r][c];
	printf("Enter elements of 2nd matrix:- " );
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
				scanf("%d" , &m2[i][j]);
		}
	}
	printf("Entered 1st matrix is:- \n" );
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d \t" , m1[i][j]);
		}
		printf("\n");
	}
	
	printf("Entered 2nd matrix is:- \n" );
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d \t" , m2[i][j]);
		}
		printf("\n");
	}
	
	int mul[r][c];
	// Multiplying a matrix 
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			mul[i][j]=0;
			for(k=0 ; k<c ; k++)
			{
				mul[i][j] += m1[i][k] * m2[k][j];
 			}
		}
	}
	
	printf("Multiplied matrix is:- \n" );
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d \t" , mul[i][j]);
		}
		printf("\n");
	}
}
