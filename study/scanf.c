#include <stdio.h>
#include <stdlib.h>

int main ()

{
	char ourName[20];
	char hisName[20];
	int year;

	printf("What is your name?\n");
	scanf("%s", yourName);

	printf("What is your best friends name?\n");	
	scanf("%s", hisName);

	printf("Since when you guys are BFF's\n");
	scanf("%d", &year);

	printf("%s and %s are best friends since %d\n", yourName, hisName, year);

	return 0; 
}
