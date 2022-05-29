#include<stdio.h>

void main()
{
    int n,i,el,index,pos,flag;
    printf("Enter the number of elements :- \n");
    scanf("%d" , &n);
    int ar[n];
    printf("Enter elements :- \n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d" , &ar[i]);
    }
    printf("Entered elements are:- \n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d \t" , ar[i]);
    }
    printf("\nEnter element to searched:- \n");
    scanf("%d" , &el);
    for(i=0 ; i<n ; i++)
    {
        if(el == ar[i])
        {
            index = i;
            pos = i+1;
            flag = 1;
            break;
        }
        else
        {
        	flag=0;
		}
    }
    
    if(flag)
    {
        printf("Searched element %d found at position %d and at index %d \n" , el , pos , index);
    }
    else
    {
        printf("Element not found in list \n");
    }
    
    
}

