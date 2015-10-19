#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	int i;
	int hours[7];

	for( i=0; i<7; i++){
		printf("How many hours did you study in %d.day of week ?\n", i+1);
		scanf(" %d", &hours[i]);
	}
	
	int avg;
	int totalHours = 0;

	for( i=0; i<7; i++){
		totalHours += hours[i];
	}
	avg = totalHours / 7;

	printf("You studied %d hours totaly in a week, %d hours averagely in one day\n", totalHours, avg);

	return 0;
}
