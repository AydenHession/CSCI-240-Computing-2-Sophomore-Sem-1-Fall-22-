//RANDbubble.c
//famous bubble sort... but random values list
//implement the swap algorithm with pointers, and a random implementation

#include <stdio.h>
#include <stdlib.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);
void randlist();

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main()
{
	printf("Before: \n");
	printValues();
	printf("Before Rand: \n");
	randlist();
	printf("After Rand: \n");
	printValues();
	printf("sort \n");
	sort();
	printf("After: \n");
	printValues();

	return(0);

}//end main()

void printValues()
{
	for(int i = 0; i <9; i++) //run through the entire array of values
	{
		printf("%d ", values[i]); //print int of values at address of i
	}
	printf("\n"); //formatting output
}//end printvalues()

void sort()
{
	for (int i = 0; i < 9; i++) //runs through all addresses
	{
		for (int q = 0; q <= 7; q++) //runs through only 8 of the addresses, because of q+1 , we don't search for values that dont exist in values[9]
		{
			if (values[q] > values[q+1])
			{
				swap(&values[q], &values[q+1]);
				printValues();
			}
		}
	}
}//end sort()

void swap(int* a, int* b)
{
	int temp = 0; //set to 0 to avoid chancve of garbage values... although super unlikely, did this in 263
	temp = *a;// temp values set to address of a
	*a = *b;//a address set to b address
	*b = temp; //b address is set to a address by setting b address to temp values
}//end swap

void randlist()
{
	srand(time(NULL)); //standard initialization
	int temp = 0; //gonna be used to swap values and addresses

	for (int i = 0; i<9; i++) //runs through all the points for values
	{
		int temp = rand() %9 +1; // this gives a values between 0-8 and then addes 1 so 1-9 range of values
		swap(&values[i], &temp);
	}
}


