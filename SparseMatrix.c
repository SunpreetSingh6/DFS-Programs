#include<stdio.h>
void main()
{
	int r,c,i,j,size,k=0;
	printf("Program to store sparse matrix :-\n");
	printf("Enter the number of rows and columns of a matrix :-\n");
	scanf("%d %d" , &r , &c);
	int m[r][c];
	printf("Enter matrix element:-");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d" , &m[i][j]);
		}
	}
	// Checking number of non zero elements
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(m[i][j] != 0)
				size++;
		}
	}
	printf("Number of non zero elements are :- %d\n" , size);
	// Creating sparse matrix :- 3 rows for storing i,j and value;
	int sparse[3][size];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(m[i][j]!=0)
			{
				sparse[0][k] = i;
				sparse[1][k] = j;
				sparse[2][k] = m[i][j];
				k++;
			}
		}
	}
	
	printf("Sparse matrix is :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d \t" , sparse[i][j]);
		}
		printf("\n");
	}
}
