#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	char a[50]= "Bedir ";

	strcat(a, "Tapkan ");
	strcat(a, "What ");
	strcat(a, "you doing? ");
	printf("%s\n", a);

	strcpy(a, "He is really good . . .");
	printf("%s\n", a);	
	
	return 0;
}
