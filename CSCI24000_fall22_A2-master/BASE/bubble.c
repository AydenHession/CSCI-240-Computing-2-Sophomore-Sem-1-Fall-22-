//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main()
{
	printf("Before: \n");
	printValues();
	sort();
	printf("After: \n");
	printValues();

	return(0);
}//end main

void printValues()
{
	for(int i = 0; i < 9; i++) //run through the entire array of values
	{
		printf("%d ", values[i]); //print int of values at address of i
	}
	printf("\n"); //formatting output
}//end printValues

void sort()
{
	for (int i = 0; i < 9; i++) //runs through all addresses
	{
		for (int q = 0; q<=7; q++) //runs through only 8 of the addresses, because of q+1, we dont search for a value that doesn't exist in values[9]
		{
			if  (values[q] > values[q+1])
			{
				swap(&values[q], &values[q+1]);
				printValues();
			}
		}
	}
}//end sort()

void swap(int* a, int* b)
{
	int temp = 0; //set to 0 to avoid chance of garbage values 
	temp = *a; //temp value set to a address
	*a = *b; //a address set to b address
	*b = temp; //b address is set to a address by setting b address to temp value
}//end swap(int*, int*)

