#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float numberOfEntry = 0;
	float average = 0;
	float lastNumber = 0;
	float grade = 0;

	printf("Press 00 when you done. \n\n");
	
	do{
		printf("Test number: %.0f \t Average: %.2f \n\n", numberOfEntry, average);
		printf("Enter test score: \n\n");
		scanf("%f", &lastNumber);
		numberOfEntry++;
		grade += lastNumber;
		average = grade / numberOfEntry;
	
	}while(lastNumber != 00 );
	
	return 0;
}
