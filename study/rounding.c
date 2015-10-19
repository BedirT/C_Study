#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	float a;
	float b;
	char choice;

	printf("Enter a float to round it: \n");
	scanf("%f", &a);

	printf("Enter second float to round it: \n");
	scanf("%f", &b);

	printf("Wanna round it down (Press 'D')\nWanna round it up (Press 'U')\n");
	scanf("%s", &choice );

	if( choice == 'd' || choice == 'D'){
		printf("The first one is %.2f \n", floor(a) );
		printf("The second one is %.2f \n", floor(b) );
	}else if( choice == 'u' || choice == 'U'){
		printf("The first one is %.2f \n", ceil(a) );
		printf("The second one is %.2f \n", ceil(b) );
	}
	return 0;
}
