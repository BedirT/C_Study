#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	int num1, num2, result;

	printf("Enter num1\n");
	scanf(" %d", &num1);

	printf("Enter num2\n");
	scanf(" %d", &num2);

	result = num1 - num2;
	result = abs(result);
	printf("The absolute result is %d\n", result);

	return 0;
}
