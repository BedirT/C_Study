// pass array to function
#include <stdio.h>


void swap (int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c; 
}


 void reverse_value (int *numbers, int size)
//void reverse_value (int numbers[], int size)
{
	int i;
	
	for (i=0; i<size/2; i++)
		swap (&numbers[i], &numbers[size-i-1]);

	printf ("in reverse function, numbers:\n");
	for (i=0; i<size; i++)
		printf ("numbers[%d] = %d\n", i, numbers[i]);
}


int main()
{
	int numbers[10];
	int i;

	for (i=0; i<10; i++)
		numbers[i]= (i+1)*10;	


	reverse_value (numbers , 10);
	printf ("in main function, numbers:\n");
	for (i=0; i<10; i++)
		printf ("numbers[%d] = %d\n", i, numbers[i]);

	
	return 0;
}

